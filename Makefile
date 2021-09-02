CFLAGS = -Wall -Wextra -Werror
OBJECTS = $(FILES:.c=.o)#Make a .o for each .c
NAME = libft.a
CC = clang
RM = rm -f
AR = ar rcs

all:
	$(CC) $(CFLAGS) main.c && ./a.out

clean:
	$(RM) $(NAME)

limp:
	$(RM) a.out

#• Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
