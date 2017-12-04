#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strnequ.c"

int	main()
{
	printf("%d\n", ft_strnequ("ededeqdf", "", 0));

	printf("%d\n", ft_strnequ("abcde", "abdfe", 2));
	
	printf("%d\n", ft_strnequ("abc", "abc", 100));
	
	printf("%d\n", ft_strnequ("abcde", "abdde", 5));
	return (0);
}
