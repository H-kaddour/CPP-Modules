# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkaddour <hkaddour@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/19 15:51:58 by hkaddour          #+#    #+#              #
#    Updated: 2023/01/22 19:33:21 by hkaddour         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat
CC = c++ 
FLAG = -Wall -Wextra -Werror -std=c++98 -g
HEADER = Bureaucrat.hpp \
				 Form.hpp

SRCS =  main.cpp \
				Bureaucrat.cpp \
				Form.cpp

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
