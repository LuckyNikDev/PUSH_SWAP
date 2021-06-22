NAME = push_swap

LIST = main.c ft_engine.c ft_second_way.c utils_one.c ft_final_block.c ft_moving_from_B_to_A.c \
ft_first_way.c ft_general_way.c ft_marcup.c utils_two.c utils_tree.c utils_four.c ft_final_block_2.c \
ft_final_block_3.c utils_five.c

OBJ = $(patsubst %.c, %.o, $(LIST))

HEAD = push_swap.h

DIR = ./libft

LIB = libft/libft.a

FLAGS = -Wall -Werror -Wextra

all	: $(NAME)

$(NAME)	: $(OBJ) $(HEAD)
	$(MAKE) -C $(DIR)
	gcc $(FLAGS) $(LIB) $(OBJ) -o $(NAME)

%.o	: %.c
	gcc $(FLAGS) -c $< -o $@

clean	:
	$(MAKE) clean -C $(DIR)
	rm -f $(OBJ)

fclean	: clean
	rm -f $(NAME)

re	 : fclean all

.PHONY	: all clean fclean re