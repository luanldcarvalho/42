SRC = get_next_line.c get_next_line_utils.c

CFLAGS = -Wall -Wextra -Werror -D BUFFER_SIZE=10

CC = gcc

all:
	$(CC) $(CFLAGS) $(SRC) -I./ -o get_next_line.o
	./get_next_line.o

clean:
	rm -f get_next_line.o

re: fclean all

debug: $(CC) $(CFLAGS) -g $(SRC) -I ./ -o debug

leak: debug
	valgrind --tool=memcheck --leak-check=full --track-origins=yes --show-reachable=yes --num-callers=20 --track-fds=yes ./debug

.PHONY: all, clean, re

# -c para quando não tem main
# -I para indicar onde está o header.
