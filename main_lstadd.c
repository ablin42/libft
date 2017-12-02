#include "libft.h"
#include "ft_lstadd.c"

int	main()
{
	t_list **list;
	t_list *listnew;

	list = NULL;
	listnew = NULL;
	listnew->content = "okay";
	ft_lstadd(list, listnew);
	ft_putstr(listnew->content);
	return (0);
}