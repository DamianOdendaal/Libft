// add header here 


#include "libft.h"
#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else 
	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = n * -1;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
		}
		ft_putchar(n % 10 + '\0');
	}
}
