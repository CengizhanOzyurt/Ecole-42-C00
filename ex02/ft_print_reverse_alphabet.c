

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	x;

	x = 122;
	while (x > 96)
	{
		write(1, &x, 1);
		x--;
	}
}
