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
	
	ft_bzero(ent, 3);
	printf("ME	: %s \n", ent);
	strcpy(ent, "Entropy");
	bzero(ent, 3);
	printf("LIB	: %s \n", ent);
	
	ft_bzero(voi, 4);
	printf("ME	: %s \n", voi);
	strcpy(voi, "");
	bzero(voi, 4);
	printf("LIB	: %s \n", voi);

	return (0);
}
