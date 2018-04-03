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

NAME = display_file

HEAD = header.h

SRCS = display_file.c

MAIN = main.c

FLAG = -Wall -Wextra -Werror

OBJET = display_file.o

all : $(NAME)

$(NAME) :
	 gcc -c $(FLAG) -I $(HEAD) $(SRCS)
	 ar rc header.a $(OBJET)
	 ranlib header.a

#comp :
#	@gcc $(FLAG) $(MAIN) ../../libft/libft.a header.a -o $(NAME)

#exe : comp
#	@./a.out
 
clean :
	rm -rf display_file.o 

fclean : clean
	rm -rf $(NAME)
	rm -rf header.a

re : fclean all
