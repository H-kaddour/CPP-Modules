# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 20:13:42 by hkaddour          #+#    #+#              #
#    Updated: 2023/01/26 17:03:19 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scalar
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98 -g
HEADER = scalar.hpp

SRCS =  main.cpp \
				scalar.cpp

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
