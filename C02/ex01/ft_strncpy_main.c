#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char *src;
	char dest[20];

	src = "Hello World";
	printf("src   : %s\n", src);
	ft_strncpy(dest, src, 5);
	printf("ft_strcpy : %s\n", dest);
}
