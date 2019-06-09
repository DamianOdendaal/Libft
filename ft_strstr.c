// include your header

#include "libft.h"
#include <string.h>


char	compare(const char *s1, const char *s2);

char	compare(const char *s1, const char *s2)
{
	int j;

	j = 0;
	while(s1[j] != s2[j])
	{
		j++;
	}
	return (0);
}

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s2[i] != '\0')
	{
		if (s1[i] == s2[i] && compare(s1,s2))
		{
			i++;
		}
		return ((char *)s2);
		
	}
	 
	if (s1[i] != s2[i])
	{
		return (NULL);
	}
	return ((char *)s2);
}
