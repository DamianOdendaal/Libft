#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	char *a;
	int i;

	i = 0;

	if (!f || !s)
		return (NULL);
	if(!(str = ft_strnew(ft_strlen(s))))
		return (NULL);
	else 
		a = malloc(sizeof(char) + 1);
		while (s[i] != '\0')
		{
			str[i] = (*f)(i,(char)a);
			i++;
		}
		str[i] = '\0'; 
		return (str);
}
