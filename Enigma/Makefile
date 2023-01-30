src			=	$(shell ls -t src/Enigma/*.cpp)
obj			=	$(src:.cpp=.o)
libft_obj	=	$(shell ls -t include/libft/*.o)
printf_obj	=	$(shell ls -t include/ft_printf/*.o)
NAME		=	src/libEnigma.so
flags		=	-Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(src)
	make -C src/Enigma
	make -C include/libft
	rm -f include/libft/libft.a
	make -C include/ft_printf
	rm -f include/ft_printf/libftprintf.a
	g++ -shared -o $(NAME) $(obj) $(libft_obj) $(printf_obj)

clean:
	make -C include/libft clean
	make -C include/ft_printf clean
	@rm -f $(obj)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re