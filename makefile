SRC = $(wildcard ft_*.c)
OBJ = $(SRC:.c=.o)
CC = cc
FLAGS = -Wall -Werror -Wextra
NAME = libft.a

all : $(NAME)

%.o : $(SRC)
	cc $(FLAGS) -c $(SRC) -O $(OBJ)

$(NAME) : 
	ar rcs $(NAME) $(OBJ)

clean : 
	rm $(OBJ) -rf

fclean : clean
	 rm $(NAME) -rf

re :  fclean   all

# ar rcs libft.a object_files
# all clean fclean re
# clean remove cache 
# re rebuild the project 
# fclean delete cache and liberary
