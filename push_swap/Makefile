NAME = push_swap
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FT_PRINTF = ./ft_printf/libftprintf.a
SRCS = ft_isdigit.c \
	   ft_atoi.c

OBJS = $(SRCS:.c=.o)
PS_OBJ = push_swap.o

all: $(FT_PRINTF) $(NAME)

$(FT_PRINTF):
	@make -C ./ft_printf

$(NAME): $(OBJS) $(PS_OBJ)
	@$(CC) $(CFLAGS) $(OBJS) $(PS_OBJ) -o push_swap $(FT_PRINTF)
	@echo "\033[0;32m [PUSH_SWAP CREATED] \033[0m"

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -rf $(NAME)
	@make fclean -C ./ft_printf
	@echo "\033[0;32m [CLEAN] \033[0m"

re: fclean all

.PHONY: all clean fclean re
