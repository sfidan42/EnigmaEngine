NAME	=	Enigma.so

all: $(NAME)

$(NAME): $(src)
	g++ -o $(NAME) -fpic -shared $(src)
	LD_LIBRARY_PATH=.

clean:
	make -C Enigma clean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re