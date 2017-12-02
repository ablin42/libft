#include <ctype.h>
#include <stdio.h>
#include "ft_isprint.c"

int	main()
{
	printf("ME(A)	: %d	||	", ft_isprint('A'));
	printf("LIB(A)	: %d\n", isprint('A'));

	printf("ME(z)	: %d	||	", ft_isprint('z'));
	printf("LIB(z)	: %d\n", isprint('z'));

	printf("ME(0)	: %d	||	", ft_isprint('0'));
	printf("LIB(0)	: %d\n", isprint('0'));

	printf("ME(\")	: %d	||	", ft_isprint('\"'));
	printf("LIB(\")	: %d\n", isprint('\"'));

	printf("ME(+)	: %d	||	", ft_isprint('+'));
	printf("LIB(+)	: %d\n", isprint('+'));

	printf("ME({)	: %d	||	", ft_isprint('{'));
	printf("LIB({)	: %d\n", isprint('{'));

	printf("ME(@)	: %d	||	", ft_isprint('@'));
	printf("LIB(@)	: %d\n", isprint('@'));

	printf("ME(TB)	: %d	||	", ft_isprint(9));
	printf("LIB(TB)	: %d\n", isprint(9));

	printf("ME(é)	: %d	||	", ft_isprint(130));
	printf("LIB(é)	: %d\n", isprint(130));
	
	return (0);
}