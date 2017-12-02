#include "libft.h"
#include "ft_strmapi.c"
#include <stdio.h>

char	f_t(unsigned int i, char c)
{
	(void)i;
	c = c + 3;
	return (c);
}

int main()
{
	char *str;

	str = (char*)malloc(sizeof(str) * (10 + 1));
	ft_strcpy(str, "Harbinger");
	//(char *s, void (*f)(char *))
	printf("%s", ft_strmapi(str, f_t));
	return (0);
}