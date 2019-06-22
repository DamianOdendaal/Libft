//header here

#include "libft.h"

char	*ft_itoa(int n)
{
	char *rets;
	long int nbr;
	unsigned int i;

	i = ft_intlen(n);
	if (!(rets = ft_strnew(i)))
		return (NULL);
	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		rets[i] = '-';
	}
}
