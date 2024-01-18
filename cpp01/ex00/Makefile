# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sun-wkim@student.42lausanne.ch <sun-wki    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 15:15:21 by sun-wkim@st       #+#    #+#              #
#    Updated: 2024/01/18 15:19:57 by sun-wkim@st      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRCS =	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp 

OBJS = $(SRCS:.cpp=.o)

GREEN = \033[1;32m
RED = \033[1;31m
GREY = \033[2;37m
MAGENTA = \033[0;35m
RESET = \033[m

all: $(NAME)

$(NAME) : $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "$(NAME): $(GREEN)object files created$(RESET)"
		@echo "$(NAME): $(GREEN)$(NAME) compiled$(RESET)"

clean:
		@rm -rf $(OBJS)
		@echo "$(NAME): $(RED)$(OBJS) deleted$(RESET)"
		@echo "$(NAME): $(RED)object files deleted$(RESET)"

fclean: clean
		@rm -f $(NAME)
		@echo "$(NAME): $(RED)$(NAME) deleted$(RESET)"

re:
		@$(MAKE) fclean
		@$(MAKE) all

.PHONY: all clean fclean re

.SILENT: $(OBJS)
