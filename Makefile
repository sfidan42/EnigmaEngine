make_enigma		=	make -C Enigma/src
make_sandbox	=	make -C SandboxApp/src

all:
	$(make_enigma)
	$(make_sandbox)

clean:
	$(make_enigma) clean
	$(make_sandbox) clean

fclean: clean
	rm -f Enigma/src/Enigma.so

re: fclean 

.PHONY: all clean fclean re