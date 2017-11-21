/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:30:32 by ablin             #+#    #+#             */
/*   Updated: 2017/11/21 21:04:54 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((char *)src)[i] != (char)c)
	{
		printf("[%c : %c]\n", ((char *)src)[i], (char)c);
		((char *)dest)[i] = ((char*)src)[i];
		i++;
	}
	return (dest);
}
