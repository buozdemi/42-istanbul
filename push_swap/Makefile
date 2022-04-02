NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FT_PRINTF = ./ft_printf/libftprintf.a
SRCS = ft_isdigit.c \
	   ft_atoi.c \
	   util_swap.c \
	   util_create.c \
	   util_push.c

OBJS = $(SRCS:.c=.o)
PS_OBJ = push_swap.o

all: $(FT_PRINTF) $(NAME)

$(FT_PRINTF):
	@make -sC ./ft_printf

$(NAME): $(OBJS) $(PS_OBJ)
	@$(CC) $(CFLAGS) $(OBJS) $(PS_OBJ) -o push_swap $(FT_PRINTF)
	@echo "\033[0;32m[EXECUTABLE CREATED]\033[0"

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "\033[0;32m[FILES COMPILED]\033[0"

clean:
	@rm -rf $(OBJS) $(PS_OBJ) ./ft_printf/*.o

fclean: clean
	@rm -rf $(NAME) $(FT_PRINTF)
	@echo "\033[0;32m[CLEARED]\033[0"

re: fclean all

.PHONY: all clean fclean re
