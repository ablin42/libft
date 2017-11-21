#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_memccpy.c"

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
	
	printf("ME(Entropy, Rapture, p, 7)	: %s	||	", ft_memccpy(ent, rap, 'p', 7));
	printf("LIB	: %s\n", memccpy(ent, rap, 'p', 7));

	printf("ME(Entropy, Rapture, p, 2)	: %s	||	", ft_memccpy(ent, rap, 'p', 2));
	printf("LIB	: %s\n", memccpy(ent, rap, 'p', 2));

	printf("ME(Destruction, Void, x, 4)	: %s	||	", ft_memccpy(des, voi, 'x', 4));
	printf("LIB	: %s\n", memccpy(des, voi, 'x', 4));

	printf("ME(Kill, Exterminate, o, 10)	: %s	||	", ft_memccpy(kill, ext, 'o', 10));
	printf("LIB	: %s\n", memccpy(kill, ext, 'p', 10));

	return (0);
}
