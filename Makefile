# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttridon <ttridon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/17 16:41:46 by ttridon           #+#    #+#              #
#    Updated: 2016/12/09 17:01:35 by baalbane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fract_ol

CC = gcc

CFLAGS = -Wall -Wextra -Werror



SRC_NAME =	

SRC_PATH = srcs/

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))


all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re