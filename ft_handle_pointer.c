/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:00:44 by ychabane          #+#    #+#             */
/*   Updated: 2025/11/07 09:27:49 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_pointer(void *ptr)
{
	if (!ptr)
		return (ft_putstr("(nil)"));
	else
		return (ft_putstr("0x") + ft_print_adress((long unsigned int)ptr));
}
