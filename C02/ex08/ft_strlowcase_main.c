#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "AMGEOAMGPOAEfslafwMwoP02";
	printf("%s", ft_strlowcase(str));

	int i;
	scanf("%d", &i);
}