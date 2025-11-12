/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:20:53 by ychabane          #+#    #+#             */
/*   Updated: 2025/11/11 08:08:09 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_2(const char *format, size_t *index_from, va_list args,
		int *result)
{
	if (format[(*index_from) + 1] == 'c')
		*result += ft_putchar(va_arg(args, int));
	else if (format[(*index_from) + 1] == 's')
		*result += ft_handle_string(va_arg(args, char *));
	else if (format[(*index_from) + 1] == 'p')
		*result += ft_handle_pointer(va_arg(args, void *));
	else if (format[(*index_from) + 1] == 'd' || format[(*index_from)
			+ 1] == 'i')
		*result += ft_putnbr(va_arg(args, int));
	else if (format[(*index_from) + 1] == '%')
	{
		*result += ft_putchar('%');
		if (!format[(*index_from) + 1] && ft_isplaceholder(format[(*index_from)
					+ 2]))
			*result += ft_putchar(format[(*index_from)++ + 2]);
	}
	else if (format[(*index_from) + 1] == 'u')
		*result += ft_print_number_base(va_arg(args, unsigned int), BASE_10);
	else if (format[(*index_from) + 1] == 'x')
		*result += ft_print_number_base(va_arg(args, int), BASE_16_1);
	else if (format[(*index_from) + 1] == 'X')
		*result += ft_print_number_base(va_arg(args, int), BASE_16_2);
}

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
			ft_print_2(format, &i, args, &result);
			i = i + 2;
		}
		else
			result += ft_putchar(format[i++]);
	}
	va_end(args);
	return (result);
}
