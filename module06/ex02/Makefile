# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/25 19:02:57 by ibouhiri          #+#    #+#              #
#    Updated: 2021/03/25 20:12:23 by ibouhiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC   = main.cpp Base.cpp

CC	  = clang++

FLAGS = -Wextra -Werror -Wall

EXEC  = a.out

all: $(EXEC)

$(EXEC) : 
	$(CC) $(FLAGS) $(SRC) -o $(EXEC) 

clean: 
	rm -rf $(EXEC)
fclean: clean

re: clean all
