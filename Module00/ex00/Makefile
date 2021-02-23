# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/18 11:46:58 by ibouhiri          #+#    #+#              #
#    Updated: 2021/02/18 12:25:41 by ibouhiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = megaphone.cpp
 
FLAGES = -Wall -Wextra -Werror

COMPILER = clang++

NAME = megaphone

all: $(NAME)

$(NAME):
	$(COMPILER) $(FLAGES) -o $(NAME) $(FILES)

fclean: clean

clean:
	rm -rf $(NAME)
re : fclean all
	