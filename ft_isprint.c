int	ft_isprint(int c)
{
	if (c >= 'A' && c <= 'Z') 
		return (1);	
	else if (c >= 'a' && c <= 'z')
		return (2);
	else if (c >= '0' && c <= '9')
		return (4);
	else if (c >= 32 && c <= 126)
		return(16);
	else
		return (0);
}