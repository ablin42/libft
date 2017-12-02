#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strsub.c"

int	main()
{
	
	char *ent;
	char *rap;
	char *des;
	char *voi;
	char *kill;
	char *ext;

	ent = (char*)malloc(sizeof(ent) * (30 + 1));
	rap = (char*)malloc(sizeof(rap) * (30 + 1));
	des = (char*)malloc(sizeof(des) * (30 + 1));
	voi = (char*)malloc(sizeof(voi) * (30 + 1));
	kill = (char*)malloc(sizeof(kill) * (4 + 1));
	ext = (char*)malloc(sizeof(ext) * (11 + 1));
	strcpy(ent, "Entropy");
	strcpy(des, "Destruction");
	strcpy(ext, "Exterminate");

	printf("ME(Entropy, 4, 3)	: %s \n", ft_strsub(ent, 4, 3));

	printf("ME(Destruction, 2, 6)	: %s \n", ft_strsub(des, 2, 6));

	printf("ME(Exterminate, 2, 4)	: %s \n", ft_strsub(ext, 2, 4));
	return (0);
}