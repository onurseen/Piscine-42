#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char *src;
	char dest[12];

	src = "Hello World";
	printf("src   : %s\n", src);
	ft_strcpy(dest, src);
	printf("ft_strcpy : %s\n", dest);

	int i;
	scanf("%d", &i);
}