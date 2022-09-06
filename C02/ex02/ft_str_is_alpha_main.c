#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main()
{
	printf("%d", ft_str_is_alpha("abcmaefmaek"));
	printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
	printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
	printf("\n%d", ft_str_is_alpha(""));
}
