#include "libft.h"
#include "ft_striteri.c"
#include <stdio.h>

void	f_t(unsigned int i, char *str)
{
	str[i] = str[i] + 3;
	ft_putchar(str[i]);
}

int main()
{
	char *str;

	str = (char*)malloc(sizeof(str) * (10 + 1));
	ft_strcpy(str, "Harbinger");
	//(char *s, void (*f)(char *))
	ft_striteri(str, f_t);
	return (0);
}