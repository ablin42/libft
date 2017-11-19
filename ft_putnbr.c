#include <unistd.h>

static	void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void			ft_putnbr(int n)
{	
	if (n == -2147483648)
	{	
		ft_putchar('-');
		ft_putnbr(214748364);
		ft_putchar('8');

	}
	if (n < 0 && n != -2147483648)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else if (n != -2147483648 && n <= 9)
	{
		ft_putchar(n + '0');
	}
}