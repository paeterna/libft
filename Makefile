CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

ARFLAGS = rcs

SRCS = ft_atoi.c ft_lstadd_back.c ft_memchr.c ft_split.c ft_strncmp.c \
ft_bzero.c ft_lstadd_front.c ft_memcmp.c ft_strchr.c ft_strnstr.c \
ft_calloc.c ft_lstclear.c ft_memcpy.c ft_strdup.c ft_strrchr.c \
ft_isalnum.c ft_lstdelone.c ft_memmove.c ft_striteri.c ft_strtrim.c \
ft_isalpha.c ft_lstiter.c ft_memset.c ft_strjoin.c ft_substr.c \
ft_isascii.c ft_lstlast.c ft_putchar_fd.c ft_strlcat.c ft_tolower.c \
ft_isdigit.c ft_lstmap.c ft_putendl_fd.c ft_strlcpy.c ft_toupper.c \
ft_isprint.c ft_lstnew.c ft_putnbr_fd.c ft_strlen.c \
ft_itoa.c ft_lstsize.c ft_putstr_fd.c ft_strmapi.c get_next_line.c \
ft_printf.c ft_puthex.c ft_put.c ft_atof.c ft_putstrjoin_fd.c \
ft_putstrs_fd.c

SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(SRCS_BONUS:.c=.o)

all: $(NAME) $(OBJS_BONUS)
	@ar $(ARFLAGS) $(NAME) $(OBJS_BONUS)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ar $(ARFLAGS) $@ $^

clean:
	@rm -f $(OBJS) $(OBJS_BONUS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re




