int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

char	*ft_strstr(char *str, char*to_find)
{
	int	x;
	int	y;
	int	flag;
	int	len;
	int	dum;

	flag = 1;
	x = -1;
	len	= ft_strlen(to_find);
	while (str[++x])
	{
		y = 0;
		dum = x;
		while (to_find[y])
		{
			if (str[dum++] == to_find[y++])
				flag = 1;
			else
			{
				flag = 0;
				break;
			}
		}
	}
	if (flag)
		return (to_find);
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char find[] = "pisci999999999ne";
	printf("%s", ft_strstr(str, find));
}
