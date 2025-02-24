CC = cc

CFLAGS = -Wall -Wextra -Werror -I.

NAME = libft.a

ARFLAGS = rcs

SRC = ft_atoi.c ft_lstadd_back.c ft_memchr.c ft_split.c ft_strncmp.c \
ft_bzero.c ft_lstadd_front.c ft_memcmp.c ft_strchr.c ft_strnstr.c \
ft_calloc.c ft_lstclear.c ft_memcpy.c ft_strdup.c ft_strrchr.c \
ft_isalnum.c ft_lstdelone.c ft_memmove.c ft_striteri.c ft_strtrim.c \
ft_isalpha.c ft_lstiter.c ft_memset.c ft_strjoin.c ft_substr.c \
ft_isascii.c ft_lstlast.c ft_putchar_fd.c ft_strlcat.c ft_tolower.c \
ft_isdigit.c ft_lstmap.c ft_putendl_fd.c ft_strlcpy.c ft_toupper.c \
ft_isprint.c ft_lstnew.c ft_putnbr_fd.c ft_strlen.c \
ft_itoa.c ft_lstsize.c ft_putstr_fd.c ft_strmapi.c get_next_line.c \
ft_printf.c ft_puthex.c ft_put.c ft_atof.c ft_putstrjoin_fd.c \
ft_putstrs_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
ft_strjoin_va.c

OBJ_DIR = OBJ/
OBJ = $(SRC:%.c=$(OBJ_DIR)%.o)

all: $(NAME)
	@ar $(ARFLAGS) $(NAME)

$(NAME): $(OBJ)
	@ar $(ARFLAGS) $@ $^

$(OBJ_DIR)%.o: %.c libft.h | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re




