#include <stdio.h>
#include "ft_putnbr_fd.c"

int	main()
{
	printf("(1998)		:	");
		ft_putnbr_fd(1998, 1);

	printf("\n(2147483647)	:	");
		ft_putnbr_fd(2147483647, 1);

	printf("\n(-1337)		:	");
		ft_putnbr_fd(-1337, 1);

	printf("\n(-2147483648)	:	");
		ft_putnbr_fd(-2147483648, 1);

	return (0);
}