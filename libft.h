#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stddef.h> // NULL & size_t
#include <stdlib.h> // malloc

int ft_isalpha(int n);
int ft_isdigit(int n);
int ft_isalnum(int n);
int ft_isascii(int n);
int ft_isprint(int n);

int ft_strlen(const char *str);

void *ft_memset(void *ptr, int value, size_t len);
void *ft_memcpy(void *dest, const void *source, size_t len);
void *ft_memchr(const void *ptr, int value, size_t len);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t len);
void *ft_memmove(void *dest, const void *src, size_t len);
void ft_bzero(void *ptr, size_t len);

int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi (const char *cStr);

char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
char *ft_strnstr(const char *str1, const char *str2, size_t len);
int ft_strncmp(const char *str1, const char *str2, size_t len);
size_t ft_strlcpy(char *dest, const char *src, size_t len);
size_t ft_strlcat(char *dest, const char *src, size_t len);


// malloc
void *ft_calloc(size_t elt_count, size_t elt_size);
char *ft_strdup(const char *str);
#endif