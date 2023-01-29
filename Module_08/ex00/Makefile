# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/29 18:18:18 by hkaddour          #+#    #+#              #
#    Updated: 2023/01/29 18:19:11 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = find
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98 -g
HEADER = easyfind.hpp \
				 easyfind.tpp

SRCS =  main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAG) -c $<

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
