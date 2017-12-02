#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_memmove.c"

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
	
	printf("ME(Entropy, Rapture, 7)	: %s	||	", ft_memmove(ent, rap, 7));
	printf("LIB	: %s\n", memmove(ent, rap, 7));
	
	printf("ME(Destruction, Void, 2): %s	||	", ft_memmove(des, voi, 2));
	printf("LIB	: %s\n", memmove(des, voi, 2));

	char	testA1[] = "abcdef";
	char	testB1[] = "abcdef";
	char	testA2[] = "abcdef";
	char	testB2[] = "abcdef";

	printf("ME(abcdef + 1, abcdef, 5): %s	||	", ft_memmove(testA1 + 1, testA1, 5));
	printf("LIB	: %s\n", memmove(testB1 + 1, testB1, 5));

	printf("ME(abcdef, abcdef + 1, 0): %s	||	", ft_memmove(testA2, testA2 + 1, 0));
	printf("LIB	: %s\n", memmove(testB2, testB2 + 1, 0));

	return (0);
}
