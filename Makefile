# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsandshr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 18:53:00 by dsandshr          #+#    #+#              #
#    Updated: 2019/04/06 18:59:31 by dsandshr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = *.c
NEN = *.o
NAME = libft.a
all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) $(NEN)
	ranlib $(NAME)
clean:
	rm -f $(NEN)
fclean: clean
	rm -f libft.a
re: clean all