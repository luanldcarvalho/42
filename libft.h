#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h> //excluir antes de finalizar
#include <stdlib.h> //excluir antes de finalizar
#include <string.h> //excluir antes de finalizar
#include "./ft_isalpha.c" //Okay
#include "./ft_isdigit.c" //Okay
#include "./ft_isalnum.c" //Okay
#include "./ft_isascii.c" //Okay
#include "./ft_isprint.c" //Okay
#include "./ft_toupper.c" //Okay
#include "./ft_tolower.c" //Okay
#include "./ft_strlen.c" //Okay
#include "./ft_memset.c" //Okay
#include "./ft_bzero.c" //Okay
#include "./ft_memcpy.c" //Okay
#include "./ft_memmove.c" //Okay
#include "./ft_memchr.c" //Okay
#include "./ft_memcmp.c" //Okay
#include "./ft_strchr.c" //Okay
#include "./ft_strrchr.c" //Okay
#include "./ft_strncmp.c" //Okay
#include "./ft_strlcpy.c" //Okay

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void 	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif
