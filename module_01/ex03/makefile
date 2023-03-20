NAME	= zombie

SRC		= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf


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
	@echo  EXECUTABLE REMOVED


fclean:
	@$(RM) $(NAME)
	@echo  EXECUTABLE REMOVED

re: clean all