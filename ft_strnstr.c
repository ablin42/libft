/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:22:36 by ablin             #+#    #+#             */
/*   Updated: 2017/12/01 01:09:47 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (haystack[i] != '\0' && needle[j] != '\0')
	{
		j = 0;
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (j == n)
				return (&((char *)haystack)[i - j]);
		}
		i++;
	}
	return (NULL);
}
