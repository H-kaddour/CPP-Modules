# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 18:26:08 by hkaddour          #+#    #+#              #
#    Updated: 2023/01/27 14:48:09 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98 -g
HEADER = scalar.hpp

SRCS = main.cpp \
			 serialize.cpp

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
