# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 15:22:14 by bsilva-c          #+#    #+#              #
#    Updated: 2023/07/07 19:56:12 by bsilva-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=c++
CXXFLAGS=-Wall -Werror -Wextra -std=c++98
DEPS=

SRCS=main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJS=$(SRCS:.cpp=.o)
NAME=FragTrap

all: $(NAME)
$(NAME): $(OBJS) $(DEPS)
	@$(CXX) $(OBJS) $(DEPS) -o $(NAME)
clean:
	@rm $(OBJS)
fclean: clean
	@rm $(NAME)
re: fclean all
