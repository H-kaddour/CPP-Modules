# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 15:19:43 by hkaddour          #+#    #+#              #
#    Updated: 2022/11/23 21:24:18 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98 -g
HEADER = Harl.hpp
SRCS =  main.cpp \
				Harl.cpp

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
