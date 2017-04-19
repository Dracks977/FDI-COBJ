SRC =	bloc/ASteppable.cpp	        \
	    bloc/ANotSteppable.cpp	    \
	    bloc/Ground.cpp	            \
	    bloc/Wall.cpp	            \
	    bloc/Door.cpp	            \
	    bloc/FBloc.cpp              \
	    bloc/Obstacle.cpp           \
	    charactere/Aally.cpp        \
	    charactere/Aennemy.cpp      \
	    charactere/Camera.cpp       \
	    charactere/Fcharactere.cpp  \
	    charactere/Guard.cpp        \
	    charactere/Player.cpp       \
	    charactere/Prisoner.cpp     \
	    map/ReadMap.cpp             \
	    inventory/AItem.cpp         \
	    inventory/Weapon.cpp        \
	    inventory/Fitem.cpp		\
	    Game.cpp			\

OBJ = $(SRC:%.cpp=%.o)

NAME = exec

CXX = g++

CXXFLAGS = -Wall -Wextra -Wpedantic -Werror -std=c++11

RM = rm -f

all: $(NAME)

$(NAME):	$(OBJ)
		$(CXX) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
