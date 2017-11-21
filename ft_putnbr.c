/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:18:00 by ablin             #+#    #+#             */
/*   Updated: 2017/11/21 20:18:03 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
