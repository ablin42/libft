#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strsplit.c"
#include "showtab.c"

int	main()
{
	
	char *ent;
	char *des;
	char *ext;

	ent = (char*)malloc(sizeof(ent) * (50 + 1));
	des = (char*)malloc(sizeof(des) * (50 + 1));
	ext = (char*)malloc(sizeof(ext) * (50 + 1));
	strcpy(ent, "**Entropy*will****prevail**");
	strcpy(des, "Destruction 	xxxxis yyyy key");
	strcpy(ext, "uuu Exterminate uuuuu the vvvv unworthy vvv");

	//printf("ME: [**Entropy*will****prevail**]			:	"); 
	ft_strsplit(ent, '*');
	//printf("ME: [Destruction 	xxxxis yyyy key]		:	"); ft_strsplit(des, 'x');
	//printf("ME: [uuu Exterminate uuuuu the vvvv unworthy vvv]	:	");ft_strsplit(ext, 'u');
	return (0);
}
