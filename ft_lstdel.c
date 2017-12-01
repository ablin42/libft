/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 00:38:36 by ablin             #+#    #+#             */
/*   Updated: 2017/12/01 00:45:20 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmplist;
	t_list	*tmp;

	tmplist = *alst;
	while (tmplist != NULL)
	{
		tmp = tmplist->next;
		del(((*alst)->content), ((*alst)->content_size));
		free(*alst);
		tmplist = tmp;
	}
	*alst = NULL;
}
