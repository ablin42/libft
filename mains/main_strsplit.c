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

	printf("%d\n", (ft_word_length("          ", ' ')));
	printf("%d\n", (ft_word_length("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')));
	printf("%d\n", (ft_word_length("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')));
	printf("%d\n", (ft_word_length("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i')));
	printf("%d\n", (ft_word_length("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z')));

	return (0);
}
