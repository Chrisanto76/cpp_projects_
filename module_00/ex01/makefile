NAME	= phonebook

SRC		= phonebook.cpp contact.cpp main.cpp

HEADER	= contact.class.hpp Phonebook.class.hpp

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

#Colors:
YELLOW		=	\e[93;5;226m
RESET		=	\33[0m

.PHONY: all clean re

all: $(NAME)

$(NAME): 
#	@printf "$(YELLOW) 	- Compiling $(NAME)...\n"
	@echo --- COMPILING ---
	@ $(CC) $(FLAGS) $(SRC)  -o $(NAME)
#	@printf "$(YELLOW)    - Executable ready.\n"
	@echo =================
	@echo =================
	@echo =================
	@echo =================
	@echo EXECUTABLE READY !!!

clean:
	@$(RM) $(NAME)
#	@printf "$(YELLOW)    - Executable removed.\n $(RESET)"
	@echo EXECUTABLE REMOVED 

fclean:
	@$(RM) $(NAME)
#	@printf "$(YELLOW)    - Executable removed.\n"
	@echo EXECUTABLE REMOVED

re: clean all