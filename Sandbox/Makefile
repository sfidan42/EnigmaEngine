src			=	src/SandBox.cpp
NAME		=	SandBox
flags		=	-Werror -Wextra -Wall
lib_name	=	Enigma
lib_path	=	../Enigma/src

all: $(NAME)

$(NAME): $(src)
	@g++ -L$(lib_path) $(flags) $(src) -o SandBox -l$(lib_name)

run:
	@LD_LIBRARY_PATH=$(lib_path) ./SandBox

fclean:
	@rm -f $(NAME)

re: fclean all

.PHONY: all run fclean re