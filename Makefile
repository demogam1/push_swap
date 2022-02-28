NAME = lib_swap.a

PROGRAM_NAME = push_swap

FLAGS = -Werror -Wextra -Wall

CC = gcc

AR = ar -rcs

DELETE = rm -f

SRC = 	push_swap.c \
		list_utils.c \
		list_utils_1.c \
		list_utils_2.c \
		list_utils_3.c \
		list_utils_4.c \
		push_utils.c \
		ft_mouvement.c \
		ft_mouvement_1.c \
		Tri_par_3_1.c \
		Tri_par_3.c \
		Tri_par_5.c \
		Tri_b.c \
		different_tri.c \
		utils_tri_500.c \

O_FILE = $(SRC:.c=.o)

%.o : %.c
	@printf "\x1b[33m \x1b[1m Converting \x1b[0m  \x1b[36m $< \x1b[0m \x1b[33m \x1b[1m to \x1b[0m \x1b[34m $@ \x1b[0m \r"	
	@printf "\x1b[32m    [DONE]      \x1b[0m"
	@$(CC) $(FLAGS) -c $< -o $@


$(NAME) : $(O_FILE)
	@make -C libft/
	@$(AR) $(NAME) $(O_FILE) 
	@$(CC) $(FLAGS) -g $(NAME) libft/libft.a -o $(PROGRAM_NAME) $?

all : $(NAME)

clean:
	@make -C libft/ clean
	@echo "\x1b[1m \x1b[31m [FILE DELETED PUSH SWAP] : \x1b[0m \x1b[33m \x1b[1m $(O_FILE) \x1b[0m \n " 
	@$(DELETE) $(O_FILE)

fclean: clean
	@make -C libft/ fclean
	@echo "\x1b[1m \x1b[31m [FILE DELETED PUSH SWAP] : \x1b[0m \x1b[33m \x1b[1m $(NAME) $(LIB_NAME) \x1b[0m \n "
	@$(DELETE) $(NAME) $(PROGRAM_NAME)

re: fclean all