/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 02:32:36 by ychabane          #+#    #+#             */
/*   Updated: 2025/11/06 02:34:29 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr(int n)
{
	int flag;

	flag = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
			flag++;
		}
		if (n >= 10)
			return (flag + ft_putnbr(n / 10) + ft_putnbr(n % 10));
		else
			return (ft_putchar(n + '0'));
	}
}