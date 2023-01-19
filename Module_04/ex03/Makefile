# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/13 17:10:43 by hkaddour          #+#    #+#              #
#    Updated: 2023/01/14 17:00:04 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = interface
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98 -g
HEADER = amateria.hpp

SRCS =  main.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $^ -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAG) -c $< -I $(HEADER)

clean:
	@rm -rf $(OBJS)
	@rm -f *.gch

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
