#include <ctype.h>
#include <stdio.h>
#include "ft_isalpha.c"

int	main()
{
	printf("ME(A)	: %d	||	", ft_isalpha('A'));
	printf("LIB(A)	: %d\n", isalpha('A'));

	printf("ME(a)	: %d	||	", ft_isalpha('a'));
	printf("LIB(a)	: %d\n", isalpha('a'));

	printf("ME(Z)	: %d	||	", ft_isalpha('Z'));
	printf("LIB(Z)	: %d\n", isalpha('Z'));

	printf("ME(z)	: %d	||	", ft_isalpha('z'));
	printf("LIB(z)	: %d\n", isalpha('z'));

	printf("ME(0)	: %d	||	", ft_isalpha('0'));
	printf("LIB(0)	: %d\n", isalpha('0'));

	printf("ME(9)	: %d	||	", ft_isalpha('9'));
	printf("LIB(9)	: %d\n", isalpha('9'));

	printf("ME(+)	: %d	||	", ft_isalpha('+'));
	printf("LIB(+)	: %d\n", isalpha('+'));

	printf("ME({)	: %d	||	", ft_isalpha('{'));
	printf("LIB({)	: %d\n", isalpha('{'));
	
	return (0);
}