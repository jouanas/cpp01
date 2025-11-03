CXX = c++
NAME = Unnecessary_violence
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS = $(SRCS:.cpp=.o)
HEADER = Weapon.hpp HumanB.hpp HumanA.hpp
all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re