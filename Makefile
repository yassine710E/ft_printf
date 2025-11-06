NAME = libftprintf.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c  ft_isplaceholder.c ft_print_adress.c \
ft_handle_string.c ft_handle_pointer.c   ft_print_number_base.c ft_strlen.c ft_putchar.c \
ft_putstr.c ft_putnbr.c

OBJS = $(SRCS:%.c=%.o)


all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $@ $^

%.o : %.c libftprintf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean : $(OBJS)
	rm -f $^

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re fclean clean all

