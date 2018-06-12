/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 20:18:21 by ablin             #+#    #+#             */
/*   Updated: 2018/03/15 23:28:33 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	if (s == NULL || s == 0)
	{
		ft_putstr("(null)");
		return ;
	}
	while (s[i] != '\0')
		i++;
	write(1, s, i);
}
