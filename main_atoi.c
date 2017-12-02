#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi.c"

int	main()
{
	printf("ME(197)			: %d	||	", ft_atoi("1998"));
	printf("LIB(197)		: %d\n", atoi("1998"));

	printf("ME(-1337)		: %d	||	", ft_atoi("-1337"));
	printf("LIB(-1337)		: %d\n", atoi("-1337"));

	printf("ME(  \\t -01)		: %d	||	", ft_atoi("  \t -01"));
	printf("LIB(  \\t -01)		: %d\n", atoi("  \t -01"));

	printf("ME(\\v 8 \\t  )		: %d	||	", ft_atoi("\v 8 \t  "));
	printf("LIB(\\v 8 \\t  )		: %d\n", atoi("\v 8 \t  "));

	printf("ME(\\n \\r \\v \\t \\f  10)	: %d	||	", ft_atoi("\n \r \v \t \f  10"));
	printf("LIB(\\n \\r \\v \\t \\f  10)	: %d\n", atoi("\n \r \v \t \f  10"));

	printf("ME(\\n \\r \\v \\t \\f  )	: %d	||	", ft_atoi("\n \r \v \t \f  "));
	printf("LIB(\\n \\r \\v \\t \\f  )	: %d\n", atoi("\n \r \v \t \f  "));
	
	return (0);
}