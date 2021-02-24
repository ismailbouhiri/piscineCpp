# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouhiri <ibouhiri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/18 11:46:58 by ibouhiri          #+#    #+#              #
#    Updated: 2021/02/23 16:56:19 by ibouhiri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = phonebook.cpp \
		classContacts.cpp 
 
FLAGES = -Wall -Wextra -Werror

COMPILER = clang++

NAME = phonebook

all: $(NAME)

$(NAME):
	$(COMPILER) $(FLAGES) -o $(NAME) $(FILES)

fclean: clean

clean:
	rm -rf $(NAME)
re : fclean all
	