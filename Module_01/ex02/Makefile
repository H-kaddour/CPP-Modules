# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 11:45:28 by hkaddour          #+#    #+#              #
#    Updated: 2022/11/21 11:46:44 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hi_brain
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98
SRCS =  main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $^ -o $@

%.o: %.cpp
	$(CC) $(FLAG) -c $<

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
