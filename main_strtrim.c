#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strtrim.c"

int	main()
{
	
	char *ent;
	char *des;
	char *ext;

	ent = (char*)malloc(sizeof(ent) * (50 + 1));
	des = (char*)malloc(sizeof(des) * (50 + 1));
	ext = (char*)malloc(sizeof(ext) * (50 + 1));
	strcpy(ent, "    \t \n   \n  \t   Entropy will  boe  \t   prevail    \t \n   \n  \t  ");
	strcpy(des, "Destruction is key");
	strcpy(ext, "Exterminate the unworthy");

	printf("ME(Entropy will prevail)	: %s \n", ft_strtrim(ent));

	printf("ME(Destruction is key)		: %s \n", ft_strtrim(des));

	printf("ME(Exterminate the unworthy)	: %s \n", ft_strtrim(ext));

	printf("ME %s", ft_strtrim("  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n "));
	return (0);
}
