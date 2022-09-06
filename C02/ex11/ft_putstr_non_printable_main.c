#include <unistd.h>
#include <stdio.h>
char	decimal_to_hex(char x, int i);

void	ft_putchar(char c);

void ft_putstr_non_printable(char *str);

int	main(void)
{
	char k[] = "Coucou\ntu vas bien ?";
	char l[] = "Coucou\ntu vas bien \t\v\0?";

	ft_putstr_non_printable(k);
	printf("\n");
	ft_putstr_non_printable(l);
}
