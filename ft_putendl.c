// include header 

#include "libft.h"
#include <unistd.h>

void	ft_putendl(const char *s)
{
	ft_putstr(s);
	write(1, "\n", 1);
}
