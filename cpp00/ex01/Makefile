
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
RM = rm -f

#output file names
NAME = Phonebook

#Mandatory source
FILES_PHONEBOOK = ./PhoneBook.cpp \
				./Contact.cpp \
				./main.cpp
SRCS_PHONEBOOK = $(FILES_PHONEBOOK)
OBJS_PHONEBOOK = $(SRCS_PHONEBOOK:.cpp=.o)



.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS_PHONEBOOK)
	@echo --------------------------------
	@echo $@ Making...
	$(CXX) $(CXXFLAGS) $(SRCS_PHONEBOOK) -I. -o $(NAME)

clean:
	$(RM) $(OBJS_PHONEBOOK)

fclean: clean
	$(RM) $(NAME)

re:
	make fclean
	make all
