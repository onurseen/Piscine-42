#include <stdio.h>
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
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (++i, src[i] && i < size - 1)
		dest[i] = src[i];
	dest[i] = '\0';
	return (len);
}

int main(void)
{

	char src[] = "PaNzERTiGeR4";
	char dest[] = "KaMpfWAgEn ";
	printf("%d\n%s", ft_strlcpy(dest, src, 10), dest);

	int a;
	scanf("%d", &a);
}