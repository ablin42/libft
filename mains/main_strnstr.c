#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strnstr.c"

int	main()
{
	
	char *ent;
	char *rap;
	char *des;
	char *voi;
	char *kill;
	char *ext;
	char *ext2;

	ent = (char*)malloc(sizeof(ent) * (30 + 1));
	rap = (char*)malloc(sizeof(rap) * (30 + 1));
	des = (char*)malloc(sizeof(des) * (30 + 1));
	voi = (char*)malloc(sizeof(voi) * (30 + 1));
	kill = (char*)malloc(sizeof(kill) * (4 + 1));
	ext = (char*)malloc(sizeof(ext) * (11 + 1));
	ext2 = (char*)malloc(sizeof(ext) * (11 + 1));
	strcpy(ent, "Entropy");
	strcpy(rap, "XXX");
	strcpy(des, "DeStruction");
	strcpy(voi, "Struct");
	strcpy(kill, "Kill");
	strcpy(ext, "ily");
	strcpy(ext2, "ily");

	printf("ME(DeStruction, Struct, 5)	: %s	||	", ft_strnstr(des, voi, 5));
	//printf("LIB	: %s\n", strnstr(des, voi, 5));
	
	printf("ME(Entropy, XXX, 2)	: %s	||	", ft_strnstr(ent, rap, 2));
	//printf("LIB	: %s\n", strnstr(ent, rap, 2));

	printf("ME(Kill, ily)		: %s	||	", ft_strnstr(kill, ext, 2));
	//printf("LIB	: %s\n", strnstr(kill, ext, 2));

	printf("ME(Kill, ILY)		: %s	||	", ft_strnstr(kill, ext2, 0));
	//printf("LIB	: %s\n", strnstr(kill, ext2, 0));
	return (0);
}
