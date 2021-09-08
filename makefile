CC		= gcc
CFLAGS	= -Werror -Wall -Wextra -c -g

NAME  = libft.a
SOURCES = $(shell echo *.c)
HEADERS = libft.h
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

$(dothemaking):
	$(CC) $(FLAGS) $(CFLAGS) -o $(NAME) $(OBJECTS) $(HEADERS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
	echo "[INFO] Library [$(NAME) removed!"


#Re-make everything.
re:		fclean all

