/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:17:09 by ychabane          #+#    #+#             */
/*   Updated: 2025/11/06 03:28:15 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_adress(long unsigned int n)
{
	char	*table;

	table = "0123456789abcdef";
	if (n >= 16)
		return (ft_print_adress(n / 16) + ft_print_adress(n % 16));
	else
		return (ft_putchar(table[n]));
}
