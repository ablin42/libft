#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strrchr.c"
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

	
	printf("ME(Entropy, o)		: %s			||	", ft_strrchr(ent, 'o'));
	printf("LIB	: %s\n", strrchr(ent, 'o'));

	printf("ME(Rapture, x)		: %s 		||	", ft_strrchr(rap, 'x'));
	printf("LIB	: %s\n", strrchr(rap, 'x'));
	
	printf("ME(Destruction, t)	: %s			||	", ft_strrchr(des, 't'));
	printf("LIB	: %s\n", strrchr(des, 't'));

	printf("\n \t Avec strchr \n");
	printf("ME(Destruction, t)	: %s		||	", ft_strchr(des, 't'));
	printf("LIB	: %s\n", strchr(des, 't'));



	return (0);
}