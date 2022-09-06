#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strcapitalize(char *str);

int main()
{
	char str2[] = "salut";
	printf("%s\n", ft_strcapitalize(str2));
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
	char str1[] = "diujndfvon,odficj,dc dsfovij?kl43lo+dd-sdk%cdj*dc$sdc";
	printf("%s", ft_strcapitalize(str1));
}
