#include "libft.h"

void ft_memdel(char **ap)
{
	free(*ap);
	*ap = NULL;
}