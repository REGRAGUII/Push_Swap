NAME = push_swap
CC = cc -fsanitize=address
# CFLAGS = -Wall -Wextra -Werrori 
SRC = 	main.c \
		free.c \
		ft_error.c \
		ft_parse.c \
		ft_stack.c \
		instructions/push.c \
		instructions/swap.c \
		instructions/rotate.c \
		instructions/reverse_rotate.c \
		algorithm/sort_3.c \
		algorithm/sort_5.c \
		algorithm/helper.c \
		libft/libft.a \

		

${NAME} : ${SRC}
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all : ${NAME}

fclean :
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclea re
