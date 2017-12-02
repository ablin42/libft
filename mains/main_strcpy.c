#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strcpy.c"

int	main()
{
	/*	
	char ent[100] = "Entropy";
	char rap[100] = "Rapture";

	char kill[4] = "Kill";
	char ext[11] = "Exterminate";

	char des[100] = "Destruction";
	char voi[100] = "Void";

	*/
	
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
	
	printf("ME(Entropy, Rapture)	: %s	||	", ft_strcpy(ent, rap));
	printf("LIB	: %s\n", strcpy(ent, rap));
	
	printf("ME(Destruction, Void)	: %s		||	", ft_strcpy(des, voi));
	printf("LIB	: %s\n", strcpy(des, voi));
	//CRASH TEST OVERFLOW
	printf("ME(Kill, Exterminate)	: %s	||	", ft_strcpy(kill, ext));
	printf("LIB	: %s\n", strcpy(kill, ext));
	return (0);
}