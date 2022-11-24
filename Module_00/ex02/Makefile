# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 14:31:44 by hkaddour          #+#    #+#              #
#    Updated: 2022/11/19 14:35:37 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
CC = g++
FLAG = -Wall -Wextra -Werror -std=c++98
HEADER = Account.hpp
SRCS = Account.cpp \
			 tests.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CC) $(FLAG) -c $< -I $(HEADER)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
