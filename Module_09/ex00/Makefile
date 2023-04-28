# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 15:06:39 by hkaddour          #+#    #+#              #
#    Updated: 2023/03/15 17:47:07 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc
CC = c++
FLAG = -Wall -Wextra -Werror -std=c++98 -g
HEADER = BitcoinExchange.hpp
SRCS = main.cpp \
			 BitcoinExchange.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
