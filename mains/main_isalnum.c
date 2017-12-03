#include <ctype.h>
#include <stdio.h>
#include "ft_isalnum.c"

int	main()
{
	printf("ME(A)	: %d	||	", ft_isalnum('A'));
	printf("LIB(A)	: %d\n", isalnum('A'));

	printf("ME(a)	: %d	||	", ft_isalnum('a'));
	printf("LIB(a)	: %d\n", isalnum('a'));

	printf("ME(Z)	: %d	||	", ft_isalnum('Z'));
	printf("LIB(Z)	: %d\n", isalnum('Z'));

	printf("ME(z)	: %d	||	", ft_isalnum('z'));
	printf("LIB(z)	: %d\n", isalnum('z'));

	printf("ME(0)	: %d	||	", ft_isalnum('0'));
	printf("LIB(0)	: %d\n", isalnum('0'));

	printf("ME(9)	: %d	||	", ft_isalnum('9'));
	printf("LIB(9)	: %d\n", isalnum('9'));

	printf("ME(+)	: %d	||	", ft_isalnum('+'));
	printf("LIB(+)	: %d\n", isalnum('+'));

	printf("ME({)	: %d	||	", ft_isalnum('{'));
	printf("LIB({)	: %d\n", isalnum('{'));
	
	return (0);
}