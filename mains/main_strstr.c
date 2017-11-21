#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strstr.c"

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

	printf("ME(DeStruction, Struct)	: %s	||	", ft_strstr(des, voi));
	printf("LIB	: %s\n", strstr(des, voi));
	
	printf("ME(Entropy, XXX)	: %s	||	", ft_strstr(ent, rap));
	printf("LIB	: %s\n", strstr(ent, rap));

	printf("ME(Kill, ily)		: %s	||	", ft_strstr(kill, ext));
	printf("LIB	: %s\n", strstr(kill, ext));

	printf("ME(Kill, ILY)		: %s	||	", ft_strstr(kill, ext2));
	printf("LIB	: %s\n", strstr(kill, ext2));
	return (0);
}
