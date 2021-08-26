SHELL 	= /bin/sh
CC		= gcc
FLAGS	= -std=gnu99 
CFLAGS	= -Werror -Wall -Wextra -c -g

TARGET  = libft.a
SOURCES = $(shell echo src/*.c)
HEADERS = $(shell echo include/*.h)
OBJECTS = $(SOURCES:.c=.o)

PREFIX = $(DESTDIR)/usr/local
BINDIR = $(PREFIX)/bin

all: $(TARGET)

$(TARGET): $(OBJECTS)
	ar rcs $(TARGET) $(OBJECTS)
	ranlib $(TARGET)

$(OBJECT): $(SRC)
	$(CC) $(FLAGS) $(CFLAGS) -o $(TARGET) $(OBJECTS) $(HEADERS)

clean:
	rm -rf src/*.o

fclean: clean
		@rm -rf $(TARGET)
		@echo "[INFO] Library [$(TARGET) removed!"


#Re-make everything.
re:		fclean all

