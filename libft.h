#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h> //excluir antes de finalizar
#include <stdlib.h> //excluir antes de finalizar
#include <string.h> //excluir antes de finalizar
#include "./ft_isalpha.c"
#include "./ft_isdigit.c"
#include "./ft_isalnum.c"
#include "./ft_isascii.c"
#include "./ft_isprint.c"
#include "./ft_toupper.c"
#include "./ft_tolower.c"
#include "./ft_strlen.c"
#include "./ft_memset.c"
#include "./ft_bzero.c"
#include "./ft_memcpy.c"
#include "./ft_memmove.c"

int		ft_isalpha(int argument);
int		ft_isdigit(int argument);
int		ft_isalnum(int argument);
int		ft_isascii(int argument);
int		ft_isprint(int argument);
int		ft_toupper(int argument);
int		ft_tolower(int argument);
size_t	strlen(const char *str);
void	*memset(void *s, int c, size_t n);
void	bzero(void *s, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

#endif
