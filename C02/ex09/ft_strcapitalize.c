char	*ft_strlowcase(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	flag = 1;
	i = -1;
	ft_strlowcase(str);
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag == 1)
				str[i] -= 32;
			flag = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			flag = 0;
		else
			flag = 1;
	}
	return (str);
}