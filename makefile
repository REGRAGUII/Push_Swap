NAME = push_swap
CC = cc -fsanitize=address
# CFLAGS = -Wall -Wextra -Werror
SRC = 	main.c \
		helper.c \
		./exit+free/ft_error.c \

${NAME} : ${SRC}
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all : ${NAME}

clean :
	rm -rf 

re : 
