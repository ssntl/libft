# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsaager <bsaager@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/21 14:44:19 by bsaager           #+#    #+#              #
#    Updated: 2023/12/21 15:35:45 by bsaager          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

// TODO: check for relinking, add SRC files, check all: and test

NAME = libft.a
SRC = //add all c files
OBJS = $(SRC: .c=.o)
FLAGS = -Wall -Wextra -Werror
CC = gcc
HEADER = libft.h

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all, clean, fclean, re
