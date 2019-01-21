# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 19:56:40 by spliesei          #+#    #+#              #
#    Updated: 2019/01/21 20:10:43 by spliesei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the program
NAME			:= megaphone

# Sources and objects
SRCS			:= megaphone.cpp
OBJS			:= $(SRCS:.cpp=.o)

# Flags and compiler
CXXFLAGS	:= -Wall -Wextra -Werror
CXX				:= clang++

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed!"

re: fclean all

.PHONY: all clean fclean re
