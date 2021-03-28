# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/27 16:35:15 by ibouhiri          #+#    #+#              #
#    Updated: 2021/03/28 18:40:37 by ibouhiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = array

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean: clean

re : clean all 