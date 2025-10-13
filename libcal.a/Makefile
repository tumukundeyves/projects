# Compiler and flags
CC := gcc
CFLAGS := -Wall -Wextra -Werror -I.

# Source and object files
SRC := $(wildcard *.c)
OBJ := $(SRC:.c=.o)
NAME := libcal.a

# Default target
all: $(NAME)

# Build executable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Compile .c files into .o
%.o: %.c mylib.h
	$(CC) $(CFLAGS) -c $< -o $@

# Remove object files
clean:
	rm -f $(OBJ)

# Remove object files and executable
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
