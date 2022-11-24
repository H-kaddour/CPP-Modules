# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/20 20:00:45 by hkaddour          #+#    #+#              #
#    Updated: 2022/11/21 11:36:32 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = moar_brainz
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98
HEADER = Zombie.hpp
SRCS =  main.cpp \
				Zombie.cpp \
				zombieHorde.cpp

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
