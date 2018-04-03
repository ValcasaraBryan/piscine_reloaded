NAME = a.out

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

comp :
	@gcc $(MAIN) ../../libft/libft.a header.a -o $(NAME)

exe : comp
	@./a.out 42.txt
 
clean :
	rm -rf display_file.o 

fclean : clean
	rm -rf $(NAME)

re : fclean all