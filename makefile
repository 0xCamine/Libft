SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libft.a

all :  $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c  $<  -o $@

clean : 
	rm  -f $(OBJ)  

fclean : clean
	 rm -f $(NAME)  

re :  fclean   all

# ar rcs libft.a object_files
# all clean fclean re
# clean remove cache 
# re rebuild the project 
# fclean delete cache and liberary
