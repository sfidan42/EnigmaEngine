src		=	App.cpp
obj		=	$(src:.cpp=.o)
NAME	=	../libEnigma.so
flags	=	-Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(src)
	g++ -c $(flags) -fPIC $(src)
	g++ -shared -o $(NAME) $(obj)

clean:
	@rm -f $(obj)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re