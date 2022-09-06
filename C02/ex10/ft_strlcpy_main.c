#include <stdio.h>
int	ft_strlen(char *str);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{

	char src[] = "PaNzERTiGeR4";
	char dest[] = "KaMpfWAgEn ";
	printf("%d\n%s", ft_strlcpy(dest, src, 10), dest);
}
