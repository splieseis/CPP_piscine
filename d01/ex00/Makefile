# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spliesei <spliesei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/23 21:42:07 by spliesei          #+#    #+#              #
#    Updated: 2019/01/23 21:47:02 by spliesei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the program
NAME			:= pony

# Sources, objects and headers
SRCS			:= Pony.cpp main.cpp
HDRS			:= Pony.hpp
OBJS			:= $(SRCS:.cpp=.o)


# Flags and compiler
CXXFLAGS	:= -Wall -Wextra -Werror
CXX				:= clang++

all: $(NAME)

$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed!"

re: fclean all

.PHONY: all clean fclean re
