# ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# define INT_MAX 2147483647
# define INT_MIN -2147483648

void	ft_bzero(void *s, size_t n);
size_t ft_strlen(const char *str);
void ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int	ft_isprint(int c);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n) ;
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s);
char *ft_strjoin(int size, char **strs, char *sep);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t strlcpy(char *dst, const char *src, size_t dsize);
size_t ft_strlen(const char *str);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif