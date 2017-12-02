#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_memcmp.c"

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
	
	/*printf("ME(Test, Test, 4)	: %d	||	", ft_memcmp(ent, rap, 4));
	printf("LIB	: %d\n", memcmp(ent, rap, 4));
	
	printf("ME(Dest, Zest, 4)	: %d	||	", ft_memcmp(des, voi, 4));
	printf("LIB	: %d\n", memcmp(des, voi, 4));

	printf("ME(ABCZ, ABCA, 4)	: %d 	||	", ft_memcmp(kill, ext, 4));
	printf("LIB	: %d\n", memcmp(kill, ext, 4));
*/

	printf("ME: %d	||	", ft_memcmp("ab\0ab", "ab\0ab", 6));
	printf("LIB: %d \n", memcmp("ab\0ab", "ab\0ab", 6));
	printf("ME: %d	||	", ft_memcmp("ab\0ab", "ab\0ac", 6));
	printf("LIB: %d \n", memcmp("ab\0ab", "ab\0ac", 6));
	printf("ME: %d	||	", ft_memcmp("aaa", "aad", 4));
	printf("LIB: %d \n", memcmp("aaa", "aad", 4));
	printf("*ME: %d	||	", ft_memcmp("aab", "aac", 2));
	printf("LIB: %d \n", memcmp("aab", "aac", 2));
	printf("ME: %d	||	", ft_memcmp("aww", "bpp", 0));
	printf("LIB: %d \n", memcmp("aww", "bpp", 0));
	printf("ME: %d	||	", ft_memcmp("\200", "\0", 1));
	printf("LIB: %d \n", memcmp("\200", "\0", 1));

	return (0);
}
