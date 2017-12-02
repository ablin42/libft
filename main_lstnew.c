#include "libft.h"
#include "ft_lstnew.c"

int	main()
{
	t_list *list;

	list = NULL;
	list = ft_lstnew("Harbinger", 9);
	ft_putstr(list->content);
	return (0);
}