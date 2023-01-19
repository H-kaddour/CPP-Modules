# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 17:30:42 by hkaddour          #+#    #+#              #
#    Updated: 2023/01/18 16:15:39 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98 -g
HEADER = Animal.hpp \
				 Dog.hpp \
				 Cat.hpp \
				 WrongAnimal.hpp \
				 WrongCat.hpp \
				 Brain.hpp

SRCS =  main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp \
				Brain.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAG) -c $<

clean:
	@rm -rf $(OBJS)
	@rm -f *.gch

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
