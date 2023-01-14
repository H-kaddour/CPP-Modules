# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 17:30:42 by hkaddour          #+#    #+#              #
#    Updated: 2023/01/13 14:21:14 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98 -g
HEADER = animal.hpp \
				 dog.hpp \
				 cat.hpp \
				 brain.hpp

SRCS =  main.cpp \
				animal.cpp \
				dog.cpp \
				cat.cpp \
				brain.cpp

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
