NAME = libft.a

CC= gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_strdup.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strnstr.c \
	   ft_strncmp.c \
	   ft_atoi.c \
	   ft_strlcpy.c \
	   ft_calloc.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_strmapi.c \
	   ft_split.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_itoa.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
	   get_next_line.c \
	   ft_lstadd_back.c \
	   ft_lstadd_front.c \
	   ft_lstclear.c \
	   ft_lstdelone.c \
	   ft_lstiter.c \
	   ft_lstlast.c \
	   ft_lstmap.c \
	   ft_lstnew.c \
	   ft_lstsize.c \


OBJS = $(SRCS:.c=.o)

%.o: %.c
	@printf "\x1b[33m \x1b[1m Converting \x1b[0m  \x1b[36m $< \x1b[0m \x1b[33m \x1b[1m to \x1b[0m \x1b[34m $@ \x1b[0m \r"	
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "\x1b[32m    [DONE]      \x1b[0m"

RM = rm -f

all: $(NAME)


$(NAME): $(OBJS)
	@ar -rcs $(NAME) $?

clean:	
	@$(RM) $(OBJS)
	@echo "\x1b[1m \x1b[31m [FILE DELETED IN LIBFT] : \x1b[0m \x1b[33m \x1b[1m $(OBJS) \x1b[0m \n " 

fclean: clean
	@$(RM) $(NAME)
	@echo "\x1b[1m \x1b[31m [FILE DELETED IN LIBFT] : \x1b[0m \x1b[33m \x1b[1m $(NAME) \x1b[0m "
	

re: fclean all
