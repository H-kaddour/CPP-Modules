# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 14:25:09 by hkaddour          #+#    #+#              #
#    Updated: 2022/11/23 15:08:29 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98 -g
HEADER = sed.hpp
SRCS =  main.cpp \
				file.cpp

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
