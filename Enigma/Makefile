src			=	$(shell ls -t src/Enigma/*.cpp)
obj			=	$(src:.cpp=.o)
NAME		=	src/libEnigma.so
flags		=	-Werror -Wextra -Wall

all: $(NAME)

$(NAME): $(src)
	make -C src/Enigma
	g++ -shared -o $(NAME) $(obj) $(printf_obj)

clean:
	@rm -f $(obj)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re