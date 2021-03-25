# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/25 18:21:52 by ibouhiri          #+#    #+#              #
#    Updated: 2021/03/25 18:24:14 by ibouhiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC   = main.cpp

CC	  = clang++

FLAGS = -Wextra -Werror -Wall

EXEC  = serialize

all: $(EXEC)

$(EXEC) : 
	$(CC) $(FLAGS) $(SRC) -o $(EXEC) 

clean: 
	rm -rf $(EXEC)
fclean: clean

re: clean all
