NAME = push_swap
CC = cc 
# CFLAGS = -Wall -Wextra -Werrori -fsanitize=address
SRC = 	main.c \
		helper.c \
		./exit+free/ft_error.c \

${NAME} : ${SRC}
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all : ${NAME}

clean :
	rm -rf 

re : 
