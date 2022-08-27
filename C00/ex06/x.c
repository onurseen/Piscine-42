#include <unistd.h>

int	main(void)
{
	int a;
	a = 12;

	write(1, &a, 1); 
}
