NAME = libftprintf.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_handle_pointer.c  ft_isplaceholder.c ft_printf.c ft_putchar.c ft_putstr.c ft_handle_string.c ft_print_adress.c ft_print_number_base.c ft_putnbr.c ft_strlen.c

OBJS = $(SRCS:%.c=%.o)


all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re fclean clean all

