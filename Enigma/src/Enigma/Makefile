src		=	App.cpp
flags	=	-Werror -Wextra -Wall

all: $(src)
	g++ -c $(flags) -fPIC $(src)

clean:
	@rm -f $(src:.cpp=.o)

.PHONY: all clean