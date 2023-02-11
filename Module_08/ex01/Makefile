# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 22:23:45 by hkaddour          #+#    #+#              #
#    Updated: 2023/01/30 22:33:45 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98 -g
HEADER = Span.hpp

SRCS =  main.cpp \
				Span.cpp

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
