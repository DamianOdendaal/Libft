#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{	
	int i;
	char *str1;
	char *str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if(!s1 || !s2)
		return (NULL);
	if(!(str1 = ft_strnew(ft_strlen(str1))))
		return (NULL);
	else
	{
		ft_strcat(str1, str2);
		str1[i] = '\0';
	}
	return (str1);
}
