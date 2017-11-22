# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 14:29:45 by mfonteni          #+#    #+#              #
#    Updated: 2017/11/22 16:15:10 by mfonteni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BPATH = ../fillit
TESTPATH = tests/
NAME = fillitests
CC = gcc -Wall -Wextra -Werror

all: buildtests

exe : all
	./fillitests

buildtests:
	@$(CC) $(NAME).c $(TESTPATH)*.c $(BPATH)/*.c libft.a -o fillitests

testFunc:
	@$(CC) $(BPATH)/ft_*.c $(BPATH)/libft/*.c fillitests.c $(TESTPATH)*.c -o fillitests

clean:
	@echo "nothing to clean";

fclean: clean
	@rm -f fillitests

re: fclean all
