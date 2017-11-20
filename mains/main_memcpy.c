#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_memcpy.c"

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
	
	printf("ME(Entropy, Rapture, 7)	: %s	||	", ft_memcpy(ent, rap, 7));
	printf("LIB	: %s\n", memcpy(ent, rap, 7));
	
	printf("ME(Destruction, Void, 2): %s	||	", ft_memcpy(des, voi, 2));
	printf("LIB	: %s\n", memcpy(des, voi, 2));

	printf("ME(Kill, Exterminate, 8): %s	||	", ft_memcpy(kill, ext, 4));
	printf("LIB	: %s\n", memcpy(kill, ext, 4));

	//printf("\n %s, %s \n \n", &ext[0], &ext[1]);
	//printf("ME(ext[0], ext[1], 4)	: %s	||	", ft_memcpy(&ext[0], &ext[1], 4));
	//printf("LIB	: %s\n", memcpy(&ext[0], &ext[1], 4));
	return (0);
}