CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=so_long.a
OBJS=so_long.o

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -Imlx -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJ) -framework OpenGL -framework AppKit -o $(NAME) 
