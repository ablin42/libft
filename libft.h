#ifndef __LIBFT_H
# define __LIBFT_H
# include <string.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct 	s_list
{
	void	*content;
	size_t	content_size;
	struct 	s_list *next;
}				t_list;

size_t 	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memset(void *str, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void 	ft_isdigit(int c);
void 	*ft_memalloc(size_t size);
void 	ft_memdel(void **ap);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char 	*ft_strndup(const char *s, size_t n);
char 	*ft_strcpy(char *dest, const char *src);
char 	*ft_strncpy(char *dest, const char *src, size_t n);
char 	*ft_strcat(char *dest, const char *src);
char 	*ft_strncat(char *dest, const char *src, size_t n);
char 	*ft_strchr(const char *str, int c);
char 	*ft_strrchr(const char *str, int c);
char 	*ft_strstr(const char *haystack, const char *needle);
char 	*ft_strnstr(const char	*big, const char *little, size_t len);
char	*ft_strnew(size_t size);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char 	*ft_strtrim(char const *s);
char	**ft_strsplit(char const *s, char c);
char	*ft_itoa(int n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int 	ft_strcmp(const char *s1, const char *s2);
int 	ft_strncmp(const char *s1, const char *s2, size_t n);
int 	ft_atoi(const char *str);
int 	ft_isalpha(int c);
int 	ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int 	ft_strequ(char const *s1, char const *s2);
int 	ft_strnequ(char const *s1, char const *s2, size_t n);

#endif