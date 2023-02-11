# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 18:50:30 by hkaddour          #+#    #+#              #
#    Updated: 2023/01/31 18:53:41 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Stack
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98 -g
HEADER = MutantStack.hpp \
				 MutantStack.tpp

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
