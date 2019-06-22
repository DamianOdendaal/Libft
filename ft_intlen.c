// header

#include "libft.h"

size_t	ft_intlen(long int num)
{
	long int i;

	i = 0;
	while (num > 10)
	{
		num /= 10;
		i++;
	}
	return (i + 1);
}
