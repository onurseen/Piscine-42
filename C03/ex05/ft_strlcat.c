int ft_strlen(char *str)
{
	int x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int x;
	unsigned int dest_len;
	unsigned int src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	x = 0;
	if (size <= dest_len || size == 0)
		return (src_len + size);
	while (src[x] && x < size - dest_len - 1)
	{
		dest[dest_len + x] = src[x];
		x++;
	}
	return (dest_len + src_len);
}
