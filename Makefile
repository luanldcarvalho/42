FILES = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strlen.c \
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
