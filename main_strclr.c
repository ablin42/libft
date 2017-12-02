#include <strings.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strclr.c"

int	main()
{
	char *ent;
	char *voi;

	ent = (char*)malloc(sizeof(ent) * (7 + 1));
	voi = (char*)malloc(sizeof(voi) * (1));
	strcpy(ent, "Entropy");
	strcpy(voi, "Void");
	
	ft_strclr(ent);
	//changer type retour ft
	//printf("ME(Entropy, 3):	%s", ft_strclr(ent));
	//printf("LIB	:"); strclr(ent, 3);

	//printf("\nME(Void):	%s", ft_strclr(voi));
	//printf("LIB	: %s\n"); strclr(voi, 0);

	return (0);
}