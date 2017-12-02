#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strstr.c"

int	main()
{
	char	buf[] = "Ceci n'est pas une pipe.";
	char	buf2[] = "ozarabozaraboze";
	
/*	printf("ME(buf, une)	: %s	||	", ft_strstr(buf, "une"));
	printf("LIB	: %s\n", strstr(buf, "une"));
	
	printf("ME(buf, c)	: %s	||	", ft_strstr(buf, "C"));
	printf("LIB	: %s\n", strstr(buf, "C"));

	printf("ME(buf, .)		: %s	||	", ft_strstr(buf, "."));
	printf("LIB	: %s\n", strstr(buf, "."));
*/
	printf("ME(buf, ): %s		||	", ft_strstr(buf, ""));
	printf("LIB	: %s\n", strstr(buf, ""));

	printf("ME(buf, aaaaa): %s				||	", ft_strstr(buf, "aaaaa"));
	printf("LIB	: %s\n", strstr(buf, "aaaaa"));

	printf("ME(buf2, ozaraboze): %s			||	", ft_strstr(buf2, "ozaraboze"));
	printf("LIB	: %s\n", strstr(buf2, "ozaraboze"));

	printf("ME(buf, AA): %s				||	", ft_strstr(buf, "BWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"));
	printf("LIB	: %s\n", strstr(buf, "BWAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"));

	printf("ME( , ): %s					||	", ft_strstr("", ""));
	printf("LIB	: %s\n", strstr("", ""));
	
	printf("ME(buf, une): %s				||	", ft_strstr(buf, "une"));
	printf("LIB	: %s\n", strstr(buf, "une"));
	
	printf("ME(): %s					||	", ft_strstr("J'ai fait pipapipapou en LV2", "pipapou"));
	printf("LIB	: %s\n", strstr("J'ai fait pipapipapou en LV2", "pipapou"));

	return (0);
}
