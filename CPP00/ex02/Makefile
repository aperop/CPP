EXECUTABLE=account
CC=c++
CFLAGS=-std=c++98 -c -Wall -Wextra -Werror
SOURCES=tests.cpp	Account.cpp
OBJECTS=$(SOURCES:.cpp=.o)

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
		$(CC) $(OBJECTS) -o $@

.cpp.o:
		$(CC) $(CFLAGS) $< -o $@

clean:
		rm -rf $(OBJECTS)

fclean: clean
		rm -rf $(EXECUTABLE)

re: fclean all

.PHONY: all, clean, fclean, re