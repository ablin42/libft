#include <stdio.h>
#include "ft_putstr_fd.c"

int	main()
{
	printf("(Z)		:	");
		ft_putstr_fd("Z", 1);

	printf("\n(Entropy)	:	");
		ft_putstr_fd("Entropy", 1);

	printf("\n(Rapture)	:	");
		ft_putstr_fd("Rapture", 1);

	printf("\n(-1337)		:	");
		ft_putstr_fd("-1337", 1);

	return (0);
}