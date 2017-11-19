char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int end;

	i = 0;
	end = 0;
	while (dest[i] != '\0')
		i++;
	end = i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[end + i] = src[i];	
		i++;
	}

	dest[end + i] = '\0';
	return (dest);
}