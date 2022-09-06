#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	printf("%d\n", ft_str_is_printable("ASBFASJFDAWLFAW"));
	printf("%d\n", ft_str_is_printable("ASDAVBASadafwafsa\n\0"));
	printf("%d\n", ft_str_is_printable("\n\t\f\v"));
	printf("%d\n", ft_str_is_printable(""));

	int i;
	scanf("%d", &i);
}