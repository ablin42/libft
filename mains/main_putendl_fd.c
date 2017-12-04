#include <stdio.h>
#include "ft_putendl_fd.c"

int	main()
{
	printf("(Z)		:	");
		ft_putendl_fd("Z", 1);

	printf("\n(Entropy)	:	");
		ft_putendl_fd("Entropy", 1);

	printf("\n(Rapture)	:	");
		ft_putendl_fd("Rapture", 1);

	printf("\n(-1337)		:	");
		ft_putendl_fd("-1337", 1);

	return (0);
}