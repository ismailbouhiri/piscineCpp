# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/27 17:07:12 by ibouhiri          #+#    #+#              #
#    Updated: 2021/02/28 11:25:56 by ibouhiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Replace.cpp \

CC = clang++ -Wall -Wextra -Werror
EXEC = replace
FILE = myFile.replace

all : $(EXEC)

$(EXEC):
	$(CC) $(SRC) -o $(EXEC)

fclean:
	rm -fr $(EXEC) $(FILE)
clean: fclean

re: fclean all
	
