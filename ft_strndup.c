// insert header here

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	size_t	i;
	char	*new;

	i = ft_strlen(str + 1);
	if (i == 0)
		return (ft_strnew(i));
	if (!(new = ft_strnew(i)))
		return (NULL);
	i = -1;
	while (str[++i] && i < n)
		new[i] = str[i];
	return (new);
}
