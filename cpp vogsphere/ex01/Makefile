NAME	= phonebook

SRC		= phonebook.cpp contact.cpp main.cpp

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

#Colors:
YELLOW		=	\e[93;5;226m
RESET		=	\33[0m

.PHONY: all clean re

all: $(NAME)

$(NAME): 
	@echo --- COMPILING ---
	@ $(CC) $(FLAGS) $(SRC)  -o $(NAME)
	@echo =================
	@echo =================
	@echo =================
	@echo =================
	@echo "$(YELLOW)EXECUTABLE READY !!!"

clean:
	@$(RM) $(NAME)
	@echo "$(YELLOW)EXECUTABLE REMOVED"


fclean:
	@$(RM) $(NAME)
	@echo "$(YELLOW)EXECUTABLE REMOVED"

re: clean all