EXECUTABLE=animal
CC=c++
CFLAGS=-std=c++98 -c -Wall -Wextra -Werror
SOURCES=main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
HEADERS=*.hpp

OBJECTS=$(SOURCES:.cpp=.o)

all:	$(SOURCES) $(EXECUTABLE) $(HEADERS)

-include .depend
depend: .depend
.depend: $(SOURCES)
		$(CC) $(CFLAGS) -MM $^ > "$@"

$(EXECUTABLE): $(OBJECTS) $(HEADERS)
		$(CC) $(OBJECTS) -o $@

.cpp.o:
		$(CC) $(CFLAGS) $< -o $@

clean:
		rm -rf $(OBJECTS) .depend

fclean: clean
		rm -rf $(EXECUTABLE)

re: fclean all

.PHONY: all, clean, fclean, re