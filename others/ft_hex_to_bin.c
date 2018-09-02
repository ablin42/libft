/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_to_bin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <ablin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 21:17:06 by ablin             #+#    #+#             */
/*   Updated: 2018/09/02 21:17:39 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_hex_to_bin(int hex)
{
	char	*bin;
	int		i;
	int		size;

	if (hex < 0)
		return (ft_strdup(""));
	i = 1;
	size = 0;
	while (i <= hex)
	{
		i <<= 1;
		size++;
	}
	if (size == 0)
		size = 1;
	if ((bin = ft_strnew(size)) == NULL)
		return (ft_strdup(""));
	if (hex == 0)
		bin[0] = '0';
	while (hex > 0)
	{
		bin[--size] = hex % 2 + '0';
		hex >>= 1;
	}
	return (bin);
}
