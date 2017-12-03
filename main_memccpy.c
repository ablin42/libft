#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_memccpy.c"

int	main()
{
	char	buf1[] = "Ceci est un test.";
	char	buf2[200];
	
	printf("ME	: %s			||	", ft_memccpy(buf2, buf1, 'i', 10));
	printf("LIB	: %s\n", memccpy(buf2, buf1, 'i', 10));

	printf("ME	: %s		||	", ft_memccpy(buf2, buf1, 'k', 5));
	printf("LIB	: %s\n", memccpy(buf2, buf1, 'k', 5));

	printf("ME	: %s		||	", ft_memccpy(buf2, buf1, 0, 0));
	printf("LIB	: %s\n", memccpy(buf2, buf1, 0, 0));

	printf("ME	: %s			||	", ft_memccpy(buf2, buf1, 0, sizeof(buf1)));
	printf("LIB	: %s\n", memccpy(buf2, buf1, 0, sizeof(buf1)));

	printf("ME	: %s	||	", ft_memccpy(buf2, buf1, 'C', 10));
	printf("LIB	: %s\n", memccpy(buf2, buf1, 'C', 10));

	printf("ME	: %s			||	", ft_memccpy(buf2, buf1, 0, sizeof(buf1)));
	printf("LIB	: %s\n", memccpy(buf2, buf1, 0, sizeof(buf1)));

	char dest[] = "abcdefghijklmnopqrstuvwxyz";

	printf("ME	: %s		||	", ft_memccpy(dest, strdup("test\200string"), '\200', 12));
	char dest2[] = "abcdefghijklmnopqrstuvwxyz";
	printf("LIB	: %s\n", memccpy(dest2, strdup("test\200string"), '\200', 12));


	return (0);
}
