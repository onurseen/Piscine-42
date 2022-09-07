#include <stdio.h>

void ft_putstr_non_printable(char *str);

int	main(void)
{
	char k[] = "Coucou\ntu vas bien ?";
	char l[] = "Coucou\ntu vas bien \t\v\0?";

	ft_putstr_non_printable(k);
	printf("\n");
	ft_putstr_non_printable(l);
}
