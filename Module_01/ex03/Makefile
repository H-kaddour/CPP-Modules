# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 12:24:03 by hkaddour          #+#    #+#              #
#    Updated: 2022/11/22 14:25:27 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98
HEADER = HumanA.hpp \
				 HumanB.hpp \
				 Weapon.hpp

SRCS =  main.cpp \
				Weapon.cpp \
				HumanA.cpp \
				HumanB.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAG) -c $< -I $(HEADER)

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
