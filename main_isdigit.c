#include <ctype.h>
#include <stdio.h>
#include "ft_isdigit.c"

int	main()
{
	printf("ME(A)	: %d	||	", ft_isdigit('A'));
	printf("LIB(A)	: %d\n", isdigit('A'));

	printf("ME(a)	: %d	||	", ft_isdigit('a'));
	printf("LIB(a)	: %d\n", isdigit('a'));

	printf("ME(Z)	: %d	||	", ft_isdigit('Z'));
	printf("LIB(Z)	: %d\n", isdigit('Z'));

	printf("ME(z)	: %d	||	", ft_isdigit('z'));
	printf("LIB(z)	: %d\n", isdigit('z'));

	printf("ME(0)	: %d	||	", ft_isdigit('0'));
	printf("LIB(0)	: %d\n", isdigit('0'));

	printf("ME(9)	: %d	||	", ft_isdigit('9'));
	printf("LIB(9)	: %d\n", isdigit('9'));

	printf("ME(+)	: %d	||	", ft_isdigit('+'));
	printf("LIB(+)	: %d\n", isdigit('+'));

	printf("ME({)	: %d	||	", ft_isdigit('{'));
	printf("LIB({)	: %d\n", isdigit('{'));
	
	return (0);
}