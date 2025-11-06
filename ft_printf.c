/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:20:53 by ychabane          #+#    #+#             */
/*   Updated: 2025/11/06 03:24:14 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		result;

	result = 0;
	va_start(args, format);
	i = 0;
	if (!format)
		return (-1);
	while (i < ft_strlen(format))
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				result += ft_putchar(va_arg(args, int));
			else if (format[i + 1] == 's')
				result += ft_handle_string(va_arg(args, char *));
			else if (format[i + 1] == 'p')
				result += ft_handle_pointer(va_arg(args, void *));
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				result += ft_putnbr(va_arg(args, int));
			else if (format[i + 1] == '%')
			{
				result += ft_putchar('%');
				if (ft_isplaceholder(!format[i + 1] && format[i + 2]))
					result += ft_putchar(format[i++ + 2]);
			}
			else if (format[i + 1] == 'u')
				result += ft_print_number_base(va_arg(args, unsigned int),
												"0123456789");
			else if (format[i + 1] == 'x')
				result += ft_print_number_base(va_arg(args, int),
												"0123456789abcdef");
			else if (format[i + 1] == 'X')
				result += ft_print_number_base(va_arg(args, int),
												"0123456789ABCDEF");
			i = i + 2;
		}
		else
			result += ft_putchar(format[i++]);
	}
	va_end(args);
	return (result);
}
