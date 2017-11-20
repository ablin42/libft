#include <stdio.h>
#include <stdlib.h>
#include "ft_strncat.c"

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
	
	printf("ME(Entropy, Rapture, 4)		: %s 		||	", ft_strncat(ent, rap, 4));
	printf("LIB	: %s\n", strncat(ent, rap, 4));
	
	printf("ME(Destruction, Void, 8)	: %s	||	", ft_strncat(des, voi, 8));
	printf("LIB	: %s\n", strncat(des, voi, 8));
	//CRASH TEST OVERFLOW
	printf("ME(Kill, Exterminate, 13)	: %s	||	", ft_strncat(kill, ext, 13));
	printf("LIB	: %s\n", strncat(kill, ext, 13));
	return (0);
}