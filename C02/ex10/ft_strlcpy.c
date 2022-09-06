int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int len;
	unsigned int i;

	i = -1;
	len = ft_strlen(src) - 1;
	if (size == 0)
		return (len + 1);
	while (++i, src[i] && i < len)
		dest[i] = src[i];
	dest[i] = '\0';
	return (len + 1);
}