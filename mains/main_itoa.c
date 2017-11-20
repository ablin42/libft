#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_itoa.c"

int	main()
{
	printf("ME(1998)	: %d", ft_itoa(1998));

	printf("ME(-1337)	: %d", ft_itoa(-1337));

	printf("ME(2147483647)	: %d", ft_itoa(2147483647));

	printf("ME(-2147483648)	: %d", ft_itoa(-2147483648));

	return (0);
}