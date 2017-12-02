#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_memset.c"

int	main()
{
	char *ent;
	char *voi;

	ent = (char*)malloc(sizeof(ent) * (7 + 1));
	voi = (char*)malloc(sizeof(voi) * (1));
	strcpy(ent, "Entropy");
	strcpy(voi, "");
	
	printf("ME(Entropy): %s	||	", ft_memset(ent, 'X', 3));
	printf("LIB	: %s\n", memset(ent, 'X', 3));
	
	printf("ME(\"\")		: %s	||	", ft_memset(voi, 'X', 0));
	printf("LIB	: %s\n", memset(voi, 'X', 0));

	return (0);
}