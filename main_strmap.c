#include "libft.h"
#include "ft_strmap.c"
#include <stdio.h>

char	f_t(char c)
{
	c = c + 3;
	return (c);
}

int main()
{
	char *str;

	str = (char*)malloc(sizeof(str) * (10 + 1));
	ft_strcpy(str, "Harbinger");
	//(char *s, void (*f)(char *))
	printf("%s", ft_strmap(str, f_t));
	return (0);
}