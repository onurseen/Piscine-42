#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main()
{
	printf("%d", ft_str_is_numeric("90214912840"));
	printf("\n%d", ft_str_is_numeric("841274812a"));
	printf("\n%d", ft_str_is_numeric("afsafk921_-,"));
	printf("\n%d", ft_str_is_numeric(""));

	int i;
	scanf("%d", &i);
}