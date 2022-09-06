#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
	printf("%d\n", ft_str_is_printable("ASBFASJFDAWLFAW"));
	printf("%d\n", ft_str_is_printable("ASDAVBASadafwafsa\n\0"));
	printf("%d\n", ft_str_is_printable("\n\t\f\v"));
	printf("%d\n", ft_str_is_printable(""));

}
