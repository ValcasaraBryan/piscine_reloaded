# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/03 18:46:56 by brvalcas          #+#    #+#              #
#    Updated: 2018/04/03 18:46:59 by brvalcas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	display_file

HEAD =	header.h

SRCS =	display_file.c\
		ft_putstr.c\
		ft_putchar.c

MAIN =	main.c

FLAG =	-Wall -Wextra -Werror

OBJET = display_file.o\
		ft_putstr.o\
		ft_putchar.o

all : $(NAME)

$(NAME) :
	 gcc -c $(FLAG) -I $(HEAD) $(SRCS)
	 ar rc header.a $(OBJET)
	 ranlib header.a

#comp :
#	gcc $(FLAG) $(MAIN) header.a -o $(NAME)

#exe : comp
#	@./a.out
 
clean :
	rm -rf $(OBJET) 

fclean : clean
	rm -rf $(NAME)
	rm -rf header.a

re : fclean all
