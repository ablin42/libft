#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strnstr.c"

int	main()
{
	char	buf[] = "un deux 9";
//	char	buf2[] = "ozarabozaraboze";
	

	printf("ME: %s		||	", ft_strnstr(buf, "deux", 10));
	printf("LIB	: %s\n", strnstr(buf, "deux", 10));
	
	printf("ME: %s			||	", ft_strnstr(buf, "9", 3));
	printf("LIB	: %s\n", strnstr(buf, "9", 3));
	
	printf("ME: %s		||	", ft_strnstr(buf, "", 6));
	printf("LIB	: %s\n", strnstr(buf, "", 6));
	
	printf("ME: %s		||	", ft_strnstr(buf, "deux", 5));
	printf("LIB	: %s\n", strnstr(buf, "deux", 5));
	
	printf("ME: %s			||	", ft_strnstr(buf, "9", 10));
	printf("LIB	: %s\n", strnstr(buf, "9", 10));
	
	printf("ME: %s			||	", ft_strnstr(buf, "9", 8));
	printf("LIB	: %s\n", strnstr(buf, "9", 8));
	
	return (0);
}
