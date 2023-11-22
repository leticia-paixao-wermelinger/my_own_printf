
NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRCS = my_printf.c 

OBJS = ${SRCS:.c=.o}

OPEN = ./a.out

LIBFT = my_libft/libft.a

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(LIBFT): 
	make -C my_libft

$(NAME): $(LIBFT) $(OBJS)
	cp my_libft/libft.a $(NAME)
	ar -rcs $(NAME) $(OBJS)

clean:
	make clean -C my_libft
	rm -f $(OBJS)

fclean: clean
	make fclean -C my_libft
	rm -f $(NAME)

re: fclean all

main: re
	clear
	$(CC) $(FLAGS) main.c $(NAME) && $(OPEN)
