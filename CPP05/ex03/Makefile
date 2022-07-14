EXECUTABLE=bureaucrat
CC=c++
CFLAGS=-std=c++98 -c -Wall -Wextra -Werror
SOURCES=main.cpp Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp Intern.cpp
HEADERS=*.hpp

OBJECTS=$(SOURCES:.cpp=.o)

all:	$(SOURCES) $(EXECUTABLE).app $(HEADERS)

-include .depend
depend: .depend
.depend: $(SOURCES)
		$(CC) $(CFLAGS) -MM $^ > "$@"

$(EXECUTABLE).app: $(OBJECTS) $(HEADERS)
		$(CC) $(OBJECTS) -o $@

.cpp.o:
		$(CC) $(CFLAGS) $< -o $@

clean:
		rm -rf $(OBJECTS) .depend

fclean: clean
		rm -rf $(EXECUTABLE).app *_shrubbery

re: fclean all

.PHONY: all, clean, fclean, re
