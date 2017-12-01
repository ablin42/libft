/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:23:23 by ablin             #+#    #+#             */
/*   Updated: 2017/12/01 01:32:39 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fillstr(int i, int n, char *str)
{
	while (i >= 1)
	{
		i--;
		if ((n % 10) != 0)
			str[i] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

char		*ft_itoa(int n)
{
	int		i;
	int		nb;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 1;
	nb = n;
	while (nb /= 10)
		i++;
	if ((str = (char*)malloc(sizeof(char) * (i))) == NULL)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		i = i + 1;
		str[0] = '-';
	}
	str[i] = '\0';
	return (fillstr(i, n, str));
}
