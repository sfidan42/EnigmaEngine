SRC	=	ft_printf.c ft_printf_utils.c
OBJ	=	$(SRC:.c=.o)
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	libftprintf.a

all: $(NAME)

$(NAME):
	@gcc -c $(CFLAGS) $(SRC)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean 
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
