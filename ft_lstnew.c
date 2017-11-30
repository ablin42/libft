#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newlist;

	if ((newlist = malloc(sizeof(newlist))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
	}
	else
	{
		if ((newlist->content = malloc(sizeof(content) * content_size)) == NULL)
			return (NULL);
		ft_memcpy((newlist->content), content, (sizeof(content) * content_size));
		newlist->content_size = content_size;
	}
	newlist->next = NULL;
	return (newlist);
}