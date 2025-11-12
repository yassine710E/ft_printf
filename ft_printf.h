/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychabane <ychabane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:18:06 by ychabane          #+#    #+#             */
/*   Updated: 2025/11/06 14:31:41 by ychabane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

# define BASE_10 "0123456789"
# define BASE_16_1 "0123456789abcdef"
# define BASE_16_2 "0123456789ABCDEF"

int		ft_isplaceholder(char c);
int		ft_print_adress(long unsigned int n);
int		ft_printf(const char *format, ...);
int		ft_handle_string(char *str);
int		ft_handle_pointer(void *ptr);
int		ft_print_number_base(int nb, char *base_format);
size_t	ft_strlen(const char *str);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);

#endif