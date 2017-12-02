#include <ctype.h>
#include <stdio.h>
#include "ft_isascii.c"

int	main()
{
	printf("ME(A)	: %d	||	", ft_isascii('A'));
	printf("LIB(A)	: %d\n", isascii('A'));

	printf("ME(a)	: %d	||	", ft_isascii('a'));
	printf("LIB(a)	: %d\n", isascii('a'));

	printf("ME(Z)	: %d	||	", ft_isascii('Z'));
	printf("LIB(Z)	: %d\n", isascii('Z'));

	printf("ME(z)	: %d	||	", ft_isascii('z'));
	printf("LIB(z)	: %d\n", isascii('z'));

	printf("ME(0)	: %d	||	", ft_isascii('0'));
	printf("LIB(0)	: %d\n", isascii('0'));

	printf("ME(9)	: %d	||	", ft_isascii('9'));
	printf("LIB(9)	: %d\n", isascii('9'));

	printf("ME(+)	: %d	||	", ft_isascii('+'));
	printf("LIB(+)	: %d\n", isascii('+'));

	printf("ME({)	: %d	||	", ft_isascii('{'));
	printf("LIB({)	: %d\n", isascii('{'));

	printf("ME(é)	: %d	||	", ft_isascii(130));
	printf("LIB(é)	: %d\n", isascii(130));
	
	return (0);
}