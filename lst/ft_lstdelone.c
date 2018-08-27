/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 00:38:44 by ablin             #+#    #+#             */
/*   Updated: 2018/08/27 19:24:36 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del(((*alst)->content), ((*alst)->content_size));
	free(*alst);
	*alst = NULL;
}
