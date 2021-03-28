# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/27 16:34:57 by ibouhiri          #+#    #+#              #
#    Updated: 2021/03/28 18:15:44 by ibouhiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

CC = clang++

FLAGS = -Wall -Wextra -Werror

NAME = template

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

fclean: clean

re : clean all 

