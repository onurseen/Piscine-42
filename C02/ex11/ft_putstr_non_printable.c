#include <unistd.h>
char	decimal_to_hex(int x)
{
	char *str;
	int i;

	i = 0;
	while (x != 0)
	{
		int temp;

		temp = x % 16;
		if (temp < 10)
			str[i++] = temp + 48;
		else
			str[i++] = temp + 55;
		x = x / 16;
	}
}
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
void ft_putstr_non_printable(char *str)
{
	int x;

	x = -1;
	while(str[++x])
	{
		if (is_printable(str[x]))
			write(1, &str[i], 1);
		write(1, "\\", 1);

	}
}