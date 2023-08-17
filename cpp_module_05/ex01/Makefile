# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsilva-c <bsilva-c@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/15 15:24:56 by bsilva-c          #+#    #+#              #
#    Updated: 2023/08/16 16:03:53 by bsilva-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX=c++
CXXFLAGS=-Wall -Werror -Wextra -std=c++98
DEPS=

SRCS=main.cpp Bureaucrat.cpp Form.cpp
OBJS=$(SRCS:.cpp=.o)
NAME=form

all: $(NAME)
$(NAME): $(OBJS) $(DEPS)
	@$(CXX) $(OBJS) $(DEPS) -o $(NAME)
clean:
	@rm $(OBJS)
fclean: clean
	@rm $(NAME)
re: fclean all
