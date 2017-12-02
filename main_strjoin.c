#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strjoin.c"

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

	printf("ME(Entropy, Rapture)	: %s \n", ft_strjoin(ent, rap));

	printf("ME(Destruction, Void)	: %s \n", ft_strjoin(des, voi));

	printf("ME(Kill, Exterminate)	: %s \n", ft_strjoin(kill, ext));
	return (0);
}