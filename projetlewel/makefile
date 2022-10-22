NAME = libft.a

FILES = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
		ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove \
		ft_strlcpy ft_strlcat ft_strchr ft_strrchr ft_strncmp \
		ft_memchr ft_memcmp ft_strnstr ft_calloc ft_strdup \
		ft_tolower ft_atoi  ft_toupper ft_substr ft_strjoin \
		ft_strtrim ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd\
		ft_strmapi ft_striteri ft_itoa\

	
BONUS_FILES =	ft_lstnew ft_lstadd_front ft_lstsize \
				ft_lstlast ft_lstadd_back ft_lstdelone \
				ft_lstclear ft_lstiter ft_lstmap\

OBJS_DIR = objs/

SRCS = $(FILES:=.c)
OBJS = $(addprefix $(OBJS_DIR), $(FILES:=.o))

OBJS_BONUS = $(OBJS) $(addprefix $(OBJS_DIR), $(BONUS_FILES:=.o))

CC = cc
FLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS_DIR)%.o : %.c libft.h
	@mkdir -p objs
	$(CC) $(FLAGS) -c $< -o $@

all : $(NAME)

clean :
	rm -rf $(OBJS_DIR)

fclean : clean
	rm -f libft.a

re : fclean all

bonus : $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS_BONUS)

.PHONEY : all clean fclean re bonus