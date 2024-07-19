NAME = push_swap
CC = cc 
LIBFTDIR = libft
CFLAGS = -Wall -Wextra -Werror
SRC = 	main.c \
		free.c \
		ft_error.c \
		ft_parse.c \
		ft_stack.c \
		instructions/push.c \
		instructions/swap.c \
		instructions/rotate.c \
		instructions/reverse_rotate.c \
		algorithm/sort.c \
		algorithm/helper.c \
		algorithm/algo.c \

OBJS =$(SRC:.c=.o)

		
all : ${NAME}

${NAME} : ${OBJS}
	make -C libft --silent
	$(CC) $(CFLAGS) $(OBJS) -L${LIBFTDIR} -lft -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS)  -c $< -o $@

clean : 
	make clean -C libft
	rm -rf $(OBJS)


fclean : clean
	make fclean -C libft
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
