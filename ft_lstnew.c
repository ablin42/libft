/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 00:46:28 by ablin             #+#    #+#             */
/*   Updated: 2017/12/01 02:01:51 by ablin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *nlist;

	if ((nlist = malloc(sizeof(nlist))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		nlist->content = NULL;
		nlist->content_size = 0;
	}
	else
	{
		if ((nlist->content = malloc(sizeof(content) * content_size)) == NULL)
			return (NULL);
		ft_memcpy((nlist->content), content, (sizeof(content) * content_size));
		nlist->content_size = content_size;
	}
	nlist->next = NULL;
	return (nlist);
}
