NAME	=	SandboxApp
flags	=	-Werror -Wextra -Wall

all: $(NAME)

$(NAME): SandboxApp.cpp
	g++ $(flags) SandboxApp.cpp -o SandboxApp
	./SandboxApp

clean:
	rm -f SandboxApp

re: clean all

.PHONY: all clean fclean re