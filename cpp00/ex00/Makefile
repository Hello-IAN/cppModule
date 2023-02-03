
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic-errors
RM = rm -f

#output file names
NAME = Megaphone

#Mandatory source
FILES_MEGAPHONE = ./megaphone.cpp
SRCS_MEGAPHONE = $(FILES_MEGAPHONE)
OBJS_MEGAPHONE = $(SRCS_MEGAPHONE:.cpp=.o)



.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS_MEGAPHONE)
	@echo --------------------------------
	@echo $@ Making...
	$(CXX) $(CXXFLAGS) $(SRCS_MEGAPHONE) -I. -o $(NAME)

clean:
	$(RM) $(OBJS_MEGAPHONE)

fclean: clean
	$(RM) $(NAME)

re:
	make fclean
	make all
