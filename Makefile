SRC_NAME = ft_atoi.c ft_isalpha.c ft_isprint.c ft_lstdel.c ft_lstmap.c\
	ft_memccpy.c ft_memcpy.c ft_memset.c ft_putendl.c ft_putnbr_fd.c\
	ft_strcat.c ft_strcmp.c ft_strdup.c ft_striteri.c ft_strlen.c\
	ft_strncat.c ft_strndup.c ft_strnstr.c ft_strstr.c ft_tolower.c\
	ft_bzero.c ft_isascii.c ft_itoa.c ft_lstdelone.c ft_lstnew.c ft_memchr.c\
	ft_memdel.c ft_putchar.c ft_putendl_fd.c ft_putstr.c ft_strchr.c\
	ft_strcpy.c ft_strequ.c ft_strjoin.c ft_strmap.c ft_strncmp.c\
	ft_strnequ.c ft_strrchr.c ft_strsub.c ft_toupper.c ft_isalnum.c\
	ft_isdigit.c ft_lstadd.c ft_lstiter.c ft_memalloc.c ft_memcmp.c\
	ft_memmove.c ft_putchar_fd.c ft_putnbr.c ft_putstr_fd.c ft_strclr.c\
	ft_strdel.c ft_striter.c ft_strlcat.c ft_strmapi.c ft_strncpy.c\
	ft_strnew.c ft_strsplit.c ft_strtrim.c ft_islower.c ft_isupper.c\
	ft_isspace.c ft_isblank.c
OBJ_PATH = obj
OBJ_NAME = $(SRC_NAME:.c=.o)
FRAMEWORKS = -framework OpenGL -framework AppKit
NAME = libft.a
CC = gcc
CFLAGS = -Werror -Wall -Wextra
SRC = $(SRC_NAME)
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ_PATH)/%.o: $(SRC)
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	rm -fv $(NAME)

re: fclean all

norme:
	norminette $(SRC)
	norminette include/*.h

.PHONY: all, clean, fclean, re
