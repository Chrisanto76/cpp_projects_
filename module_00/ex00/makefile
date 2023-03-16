
NAME	= megaphone
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

#Colors:
YELLOW		=	\e[93;5;226m
RESET		=	\33[0m

.PHONY: all clean re

all: $(NAME)

$(NAME): 
	@echo "$(YELLOW)- Compiling $(NAME)...\n"
	@ $(CC) $(FLAGS) megaphone.cpp -o $(NAME)
	@echo "$(YELLOW)- Executable ready.\n"

clean:
	@$(RM) $(NAME)
	@echo "$(YELLOW)- Executable removed.\n $(RESET)"

fclean:
	@$(RM) $(NAME)
	@echo "$(YELLOW)- Executable removed.\n"

re: clean all