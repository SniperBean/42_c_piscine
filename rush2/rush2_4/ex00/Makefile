# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mirivera <mirivera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/11 16:57:03 by mirivera          #+#    #+#              #
#    Updated: 2018/11/11 20:09:17 by sxu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=rush02
SRCS=src/*.c
HEADERS=./include/ft_header.h

all:
	gcc -Wall -Werror -Wextra -I $(HEADERS) $(SRCS) -o $(NAME)

clean:
	/bin/rm -f $(NAME)

fclean:
	make

re: clean all
