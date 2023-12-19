// TODO ALL:
// check header format from remote (ft_split)


// TODO: check for relinking, add PHONY again, double check 'all'

NAME = libft.a
SRC = //add all c files
OBJS = //same but as .o files
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
