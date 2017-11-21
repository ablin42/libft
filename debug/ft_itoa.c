/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:23:23 by ablin             #+#    #+#             */
/*   Updated: 2017/11/21 20:23:27 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *	ft_itoa(int n)
{
	int		i;
	int		size;
	int		signe;
	int		nb;
	char	*str;

	i = 0;
	size = 0;
	signe = 1;
	nb = n;

	while (nb >= '10')
	{
		nb = nb / 10 + nb % 10;
		size++;
	}
	if (n < 0)
		size++;
	str = (char*)malloc(sizeof(*str) * (size + 1));
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	while (nb < n)
	{
		str[i] = nb;
	}
	//free
	str[i] = '\0';
	return (str);
}
