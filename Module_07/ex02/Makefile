# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/29 12:06:41 by hkaddour          #+#    #+#              #
#    Updated: 2023/01/29 16:49:04 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98 -g
HEADER = Array.hpp \
				 Array.tpp

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
