//#include <string.h>
#include <stdio.h>
#include "ft_strlen.c"

int	main()
{
	printf("ME(+)		: %d	||	", ft_strlen("+"));
	printf("LIB(+)		: %d\n", strlen("+"));

	printf("ME()		: %d	||	", ft_strlen(""));
	printf("LIB()		: %d\n", strlen(""));

	printf("ME(Entropy)	: %d	||	", ft_strlen("Entropy"));
	printf("LIB(Entropy)	: %d\n", strlen("Entropy"));

	printf("ME(Rapture)	: %d	||	", ft_strlen("Rapture"));
	printf("LIB(Rapture)	: %d\n", strlen("Rapture"));

	printf("ME(I am their)	: %d	||	", ft_strlen("I am their"));
	printf("LIB(I am their)	: %d\n", strlen("I am their"));

	printf("ME(Harbinger)	: %d	||	", ft_strlen("Harbinger"));
	printf("LIB(Harbinger)	: %d\n", strlen("Harbinger"));
	
	return (0);
}