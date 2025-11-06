/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 01:18:19 by ychabane          #+#    #+#             */
/*   Updated: 2025/11/06 03:28:20 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_number_base(int nb, char *base_format)
{
	unsigned int	n;

	n = nb;
	if (n >= ft_strlen(base_format))
	{
		return (ft_print_number_base(n / ft_strlen(base_format), base_format)
			+ ft_print_number_base(n % ft_strlen(base_format), base_format));
	}
	else
		return (ft_putchar(base_format[n]));
}
