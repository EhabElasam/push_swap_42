# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eelasam <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/04 18:05:24 by eelasam           #+#    #+#              #
#    Updated: 2023/04/18 19:16:52 by eelasam          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

LIBFT = ./libft/libft.a
PUSH_SWAP = push_swap

SRC_S = push_swap.c move_s_p.c move_r.c move_rr.c error.c utils.c sort.c index.c
OBJ_S = $(SRC_S:.c=.o)

all: $(PUSH_SWAP)

$(LIBFT):
	@$(MAKE) -C ./libft

$(PUSH_SWAP): $(LIBFT) $(OBJ_S)
	@$(CC) $(CFLAGS) $(OBJ_S) $(LIBFT) -o push_swap

clean:
	@$(MAKE) clean -C ./libft
	@$(RM) $(OBJ_S)

fclean: clean
	@$(MAKE) fclean -C ./libft
	@$(RM) $(PUSH_SWAP)

re: fclean all

