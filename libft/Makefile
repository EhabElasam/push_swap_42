# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelasam <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 11:50:56 by eelasam           #+#    #+#              #
#    Updated: 2022/10/31 11:05:08 by eelasam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c\
	ft_isdigit.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_isprint.c\
	ft_strlen.c\
	ft_memset.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_strlcpy.c\
	ft_strlcat.c\
	ft_toupper.c\
	ft_tolower.c\
	ft_strchr.c\
	ft_strrchr.c\
	ft_strncmp.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_atoi.c\
	ft_strnstr.c\
	ft_strdup.c\
	ft_calloc.c\
	ft_substr.c\
	ft_strjoin.c\
	ft_putchar_fd.c\
	ft_putendl_fd.c\
	ft_putstr_fd.c\
	ft_putnbr_fd.c\
	ft_strtrim.c\
	ft_strmapi.c\
	ft_striteri.c\
	ft_itoa.c\
	ft_split.c\
	ft_printf.c\
	ft_putchar.c\
	ft_putnbr.c\
	ft_putstr.c\
	ft_puthex.c\
	ft_putnbru.c\
	ft_putptr.c\
	get_next_line.c\
	ft_lstnew.c\
	ft_lstadd_front.c\
	ft_lstsize.c\
	ft_lstlast.c\
	ft_lstadd_back.c\
	ft_lstdelone.c\
	ft_lstclear.c\
	get_next_line_bonus.c\

OBJECTS = ${SRC:.c=.o}

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	cc -c $(CFLAGS) $(SRC)
	ar -rcs $(NAME) $(OBJECTS)


clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all

