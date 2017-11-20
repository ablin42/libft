#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strchr.c"

int	main()
{
	char *ent;
	char *des;
	char *rap;

	ent = (char*)malloc(sizeof(ent) * (30 + 1));
	des = (char*)malloc(sizeof(des) * (30 + 1));
	rap = (char*)malloc(sizeof(rap) * (4 + 1));
	strcpy(ent, "Entropy");
	strcpy(des, "Destruction");
	strcpy(rap, "Rapture");

	
	printf("ME(Entropy, o)		: %s		||	", ft_strchr(ent, 'o'));
	printf("LIB	: %s\n", strchr(ent, 'o'));
	
	printf("ME(Destruction, D)	: %s	||	", ft_strchr(des, 'D'));
	printf("LIB	: %s\n", strchr(des, 'D'));

	printf("ME(Rapture, x)		: %s 	||	", ft_strchr(rap, 'x'));
	printf("LIB	: %s\n", strchr(rap, 'x'));

	return (0);
}