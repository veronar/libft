NAME= ft_atoi.c

all:
	gcc -c -Wall -Werror -Wextra *.c
	ar rc libft.a *.o

clean:
	rm -f *.o

fclean:clean
	rm -f libft.a

re:fclean all


