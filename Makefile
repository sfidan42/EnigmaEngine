make_enigma		=	make -C Enigma/src/Enigma
make_sandbox	=	make -C Sandbox

all:
	@$(make_enigma)
	@$(make_sandbox)

run:
	@$(make_sandbox) run

clean:
	@$(make_enigma) clean

fclean: clean
	@rm -f Enigma/src/libEnigma.so
	@rm -f Sandbox/src/App

re: fclean all

.PHONY: all clean fclean re