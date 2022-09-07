#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char src[] = "Hello";
	char dest[20];
	printf("%s", ft_strncpy(dest, src, 5));
}
