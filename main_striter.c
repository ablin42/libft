#include "libft.h"
#include "ft_striter.c"
#include <stdio.h>

void	f_t(char *c)
{
	*c = 'o';
	ft_putchar(*c);
}

int main()
{
	char *str;

	str = (char*)malloc(sizeof(str) * (10 + 1));
	ft_strcpy(str, "Harbinger");
	//(char *s, void (*f)(char *))
	ft_striter(str, f_t);
	return (0);
}