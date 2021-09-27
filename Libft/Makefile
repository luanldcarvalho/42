SRC = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c

CFLAGS = -Wall -Wextra -Werror
OBJECTS = $(SRC:.c=.o)#Make a .o for each .c
NAME = libft.a
CC = gcc
RM = rm -f
AR = ar rcs

all: $(NAME)

clean:
	$(RM) $(NAME)

limp:
	$(RM) a.out

%.o: %.c
	$(CC) $(CFLAGS) -c -I./ $< -o $@

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

fclean: clean
	$(RM) $(OBJECTS) -f

re: fclean all

test: all
	./Libftest/grademe.sh

#• Your Makefile must at least contain the rules $(NAME), all, clean, fclean and re.
# -c, compila um objeto (que nao e um programa ".c")
# -I, incluir o header "cabeçalho" o ./ na frente é para informar o diretorio.
# -f, caso o arquivo não exista. Não retorna erro.

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJECTS)
