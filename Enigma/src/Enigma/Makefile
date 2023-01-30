src		=	Application.cpp
NAME	=	Enigma.so
flags	=	-Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(src)
	g++ -c $(flags) $(src)

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re