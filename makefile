NAME = push_swap
CC = cc -fsanitize=address
# CFLAGS = -Wall -Wextra -Werrori 
SRC = 	main.c \
		free.c \
		ft_error.c \
		ft_parse.c \
		ft_stack.c \
		libft/libft.a \
		

${NAME} : ${SRC}
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all : ${NAME}

fclean :
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclea re
