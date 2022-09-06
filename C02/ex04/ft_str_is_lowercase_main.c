#include <stdio.h>

int ft_str_is_lowercase(char *str);

int	main()
{
	printf("%d", ft_str_is_lowercase("abcdefghijkl"));
	printf("\n%d", ft_str_is_lowercase("abcAdefghijkl"));
	printf("\n%d", ft_str_is_lowercase("-_134556efSghij67"));
	printf("\n%d", ft_str_is_lowercase(""));
}
