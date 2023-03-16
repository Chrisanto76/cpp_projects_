NAME	= account

SRC		= Account.cpp tests.cpp

HEADER	= ./account.hpp

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