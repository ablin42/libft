#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strcmp.c"

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
	strcpy(ent, "Test");
	strcpy(rap, "Test");
	strcpy(des, "Dest");
	strcpy(voi, "Zest");
	strcpy(kill, "ABCZ");
	strcpy(ext, "ABCA");
	
	printf("ME(Test, Test)	: %d	||	", ft_strcmp(ent, rap));
	printf("LIB	: %d\n", strcmp(ent, rap));
	
	printf("ME(Dest, Zest)	: %d	||	", ft_strcmp(des, voi));
	printf("LIB	: %d\n", strcmp(des, voi));

	printf("ME(ABCZ, ABCA)	: %d 	||	", ft_strcmp(kill, ext));
	printf("LIB	: %d\n", strcmp(kill, ext));
	
	printf("ME(\'\\200\', \'\\0\')	: %d 	||	", ft_strcmp("\200", "\0"));
	printf("LIB	: %d\n", strcmp("\200", "\0"));
	return (0);
}
