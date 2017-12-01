/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 00:38:57 by ablin             #+#    #+#             */
/*   Updated: 2017/12/01 02:13:23 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*tmp;

	newlist = NULL;
	while (lst != NULL)
	{
		tmp = f(lst);
		if ((newlist = ft_lstnew(tmp->content, tmp->content_size)) == NULL)
			return (NULL);
		newlist = newlist->next;
		lst = lst->next;
	}
	return (newlist);
}
