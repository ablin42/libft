#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strcat.c"

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
	
	printf("ME(Entropy, Rapture)	: %s	||	", ft_strcat(ent, rap));
	printf("LIB	: %s \n", strcat(ent, rap));

	printf("ME(Destruction, Void)	: %s	||	", ft_strcat(des, voi));
	printf("LIB	: %s\n", strcat(des, voi));

	//CRASH TEST OVERFLOW
	printf("ME(Kill, Exterminate)	: %s	||	", ft_strcat(kill, ext));
	printf("LIB	: %s\n", strcat(kill, ext));
	return (0);
}