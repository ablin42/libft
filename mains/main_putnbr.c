#include <stdio.h>
#include "ft_putnbr.c"

int	main()
{
	printf("(1998)		:	");
		ft_putnbr(1998);

	printf("\n(2147483647)	:	");
		ft_putnbr(2147483647);

	printf("\n(-1337)		:	");
		ft_putnbr(-1337);

	printf("\n(-2147483648)	:	");
		ft_putnbr(-2147483648);

	return (0);
}