#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include "./ft_isalpha.c"
#include "./ft_isdigit.c"
#include "./ft_isalnum.c"
#include "./ft_isascii.c"
#include "./ft_isprint.c"
#include "./ft_toupper.c"
#include "./ft_tolower.c"
#include "./ft_strchr.c"
#include "./ft_strncmp.c"
#include "./ft_strlen.c"

int	ft_isalpha(int argument);
int	ft_isdigit(int argument);
int	ft_isalnum(int argument);
int	ft_isascii(int argument);
int	ft_isprint(int argument);
int	ft_toupper(int argument);
int	ft_tolower(int argument);
int	ft_strchr(char str, char ch);
int	ft_strncmp(const char *string1, const char *string2, size_t n);
int strlen(const char *str);

#endif
