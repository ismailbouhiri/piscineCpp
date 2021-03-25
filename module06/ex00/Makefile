# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/23 17:00:49 by ibouhiri          #+#    #+#              #
#    Updated: 2021/03/24 16:56:52 by ibouhiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC   = main.cpp

CC	  = clang++

FLAGS = -Wextra -Werror -Wall

EXEC  = convert

all: $(EXEC)

$(EXEC) : 
	$(CC) $(FLAGS) $(SRC) -o $(EXEC) 

clean: 
	rm -rf $(EXEC)
fclean: clean

re: clean all
