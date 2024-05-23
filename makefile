NAME = push_swap
CC = cc 
# CFLAGS = -Wall -Wextra -Werrori 
SRC = 	main.c \
		helper.c \
		ft_error.c \
		ft_parse.c \
		libft/libft.a \
		

${NAME} : ${SRC}
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all : ${NAME}

clean :
	rm -rf 

re : 
