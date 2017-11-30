#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	while (alst != NULL && new != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}