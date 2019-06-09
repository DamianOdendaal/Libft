// include header here 


#include "libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
		
	}
	write(fd, "\n", 1);

}
