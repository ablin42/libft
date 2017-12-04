#include "libft.h"
#include "ft_lstdel.c"
#include "ft_lstnew.c"
#include "ft_bzero.c"

int	main()
{
	t_list **list;

	list = NULL;
	ft_lstdel(list, ft_bzero);
	return (0);
}