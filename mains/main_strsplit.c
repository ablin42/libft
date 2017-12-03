#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strsplit.c"
#include "showtab.c"

int	main()
{
	
	char *ent;
	char *des;
	char *ext;

	ent = (char*)malloc(sizeof(ent) * (50 + 1));
	des = (char*)malloc(sizeof(des) * (50 + 1));
	ext = (char*)malloc(sizeof(ext) * (50 + 1));
	strcpy(ent, "*****Entro*****p***y*will****prevail*****");
	strcpy(des, "Destruction xxxxis yyyy key");
	strcpy(ext, "uuu Exterminate uuuuu the vvvv unworthy vvv");

	//ft_strsplit(ent, '*');

	//printf("ME: [**Entropy*will****prevail**]			:	"); 
//	ft_strsplit("          ", ' ');
	ft_strsplit("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	//ft_strsplit("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	//ft_strsplit("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
	//ft_strsplit("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');

	//printf("ME: [Destruction 	xxxxis yyyy key]		:	"); 
	//printf("%d", (ft_count_words(des, 'e')));
	//printf("ME: [uuu Exterminate uuuuu the vvvv unworthy vvv]	:	");ft_strsplit(ext, 'u');
	return (0);
}
