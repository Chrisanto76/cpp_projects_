NAME			= attack

SRC_FILES 		= Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
SRC_DIR			= ./src/
INC_DIR			= ./includes/
OBJ_DIR			= ./obj/

OBJ				= $(addprefix $(SRC_DIR), $(SRC_FILES))
SRC				= $(addprefix $(OBJ_DIR), $(SRC_FILES:.cpp=.o))

CXX				= c++
CFLAGS			= -Wall -Werror -Wextra
CXXFLAGS		= -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
		@mkdir -p $(OBJ_DIR)
		$(CXX) $(CXXFLAGS) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
		@rm -rfv $(OBJ)
		rmdir $(OBJ_DIR)

fclean:
		@rm -rfv $(NAME)

re: fclean all

run: $(NAME)
		@./$(NAME)

.PHONY: run re fclean clean all