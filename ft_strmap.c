
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	int i;

	i = 0;
	if (!f || !s)
		return (NULL);
	if(!(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	else 
		while (s[i] != '\0')
		{
			str[i] = (*f)(s[i]);
			i++;
		}
	return (str);
}
