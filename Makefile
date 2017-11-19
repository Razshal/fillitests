# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 14:29:45 by mfonteni          #+#    #+#              #
#    Updated: 2017/11/19 14:42:54 by mfonteni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BPATH = ../fillit
TESTPATH = tests/
NAME = fillitests

all: buildtests clean

f : all
	./a.out

buildtests:
	@gcc -Wall -Wextra -Werror Unit_tests.c $(TESTPATH)*.c $(BPATH)/*.c -o fillitests

clean:
	@echo "nothing to clean";

fclean: clean
	@rm -f fillitests

re: fclean all
