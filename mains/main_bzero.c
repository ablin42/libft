#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_bzero.c"

int	main()
{
	char *ent;
	char *voi;

	ent = (char*)malloc(sizeof(ent) * (7 + 1));
	voi = (char*)malloc(sizeof(voi) * (1));
	strcpy(ent, "Entropy");
	strcpy(voi, "");
	
	//changer type retour ft
	printf("ME(Entropy, 3):	%s", ft_bzero(ent, 3));
	//printf("LIB	:"); bzero(ent, 3);

	printf("\nME(\"\"):	%s", ft_bzero(voi, 0));
	//printf("LIB	: %s\n"); bzero(voi, 0);

	return (0);
}