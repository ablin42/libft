#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strlcat.c"

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
	strcpy(rap, "Rapture");
	strcpy(des, "Destruction");
	strcpy(voi, "Void");
	strcpy(kill, "Kill");
	strcpy(ext, "Exterminate");
	
	printf("ME(Entropy, Rapture, 4)		: %lu 		||	", ft_strlcat(ent, rap, 4));
	printf("LIB	: %lu\n", strlcat(ent, rap, 4));
	
	printf("ME(Destruction, Void, 8)	: %lu	||	", ft_strlcat(des, voi, 8));
	printf("LIB	: %lu\n", strlcat(des, voi, 8));
	
	printf("ME(Kill, Exterminate, 13)	: %lu	||	", ft_strlcat(kill, ext, 13));
	printf("LIB	: %lu\n", strlcat(kill, ext, 13));
	return (0);
}
