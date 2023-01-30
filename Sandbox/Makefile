src			=	src/App.cpp
NAME		=	App
flags		=	-Werror -Wextra -Wall
lib_name	=	Enigma
lib_path	=	../Enigma/src

all: $(NAME)

$(NAME): $(src)
	@g++ -L$(lib_path) $(flags) $(src) -o App -l$(lib_name)

run:
	@LD_LIBRARY_PATH=$(lib_path) ./App

fclean:
	@rm -f $(NAME)

re: fclean all

.PHONY: all run fclean re