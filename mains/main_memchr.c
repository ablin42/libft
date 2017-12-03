#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_memchr.c"

int	main()
{
	char *ent;
	char *des;
	char *rap;

	ent = (char*)malloc(sizeof(ent) * (30 + 1));
	des = (char*)malloc(sizeof(des) * (30 + 1));
	rap = (char*)malloc(sizeof(rap) * (4 + 1));
	strcpy(ent, "Entropy");
	strcpy(des, "Destruction");
	strcpy(rap, "Rapture");

	
	printf("ME(Entropy, o, 7)	: %s		||	", ft_memchr(ent, 'o', 7));
	printf("LIB	: %s\n", memchr(ent, 'o', 7));
	
	printf("ME(Destruction, r, 3)	: %s	||	", ft_memchr(des, 'r', 3));
	printf("LIB	: %s\n", memchr(des, 'r', 3));

	printf("ME(Rapture, x, 10)	: %s 	||	", ft_memchr(rap, 'x', 10));
	printf("LIB	: %s\n", memchr(rap, 'x', 10));

	return (0);
}