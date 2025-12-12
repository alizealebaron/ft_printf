# Variables importantes
CC = cc
RM = rm -rf
NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
NAME_MAIN = libftprintf

# Ressources de l'exercice

LIB_SRCS = src/printf_putchar.c   \
		   src/printf_putaddr.c   \
		   src/printf_putstr.c    \
		   src/printf_putnbr.c    \
		   src/printf_putnbr_u.c  \
		   src/printf_strlen.c    \
		   ft_printf.c

LIB_OBJS =  $(LIB_SRCS:.c=.o)

# Aller chercher la libft

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

# Règles du make

all: $(LIBFT) $(NAME)

$(NAME): $(LIB_OBJS)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(LIB_OBJS)

clean:
	$(MAKE) clean -C $(LIBFT_DIR)
	$(RM) $(LIB_OBJS)

fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	$(RM) $(NAME)

re: fclean all

main: $(LIB_OBJS)
	cc -o $(NAME_MAIN) $(LIB_OBJS) main.c -g3

.PHONY: fclean all clean re

# Règle de la libft
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
