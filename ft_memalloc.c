/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:14:14 by ablin             #+#    #+#             */
/*   Updated: 2017/11/21 20:14:16 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	str = (char *)malloc(sizeof(*str) * (size));
	if (str == NULL)
		return (NULL);
	ft_memset(str, '0', size);
	return (str);
}
