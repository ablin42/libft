#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strncmp.c"

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
	
	printf("ME(Test, Test, 4)	: %d	||	", ft_strncmp(ent, rap, 4));
	printf("LIB	: %d\n", strncmp(ent, rap, 4));
	
	printf("ME(Dest, Zest, 4)	: %d	||	", ft_strncmp(des, voi, 4));
	printf("LIB	: %d\n", strncmp(des, voi, 4));

	printf("ME(ABCZ, ABCA, 4)	: %d 	||	", ft_strncmp(kill, ext, 4));
	printf("LIB	: %d\n", strncmp(kill, ext, 4));
	return (0);
}