#include "libft.h"
#include "ft_lstnew.c"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list	*tmp;

	newlist = NULL;
	while (lst != NULL)
	{
		tmp = f(lst);
		newlist = ft_lstnew(tmp->content, tmp->content_size);
			return (NULL);
		newlist = newlist->next;
		lst = lst->next;
	}
	return (newlist);
}