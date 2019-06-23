//header

#include "libft.h"
#include <stdio.h>

char	*ft_strtok(const char *str, const char *delim)
{
	char *start;
	size_t len;
	char *pstart;
	int i;

	start = NULL;
	pstart = start;
	len = ft_strlen(delim);
	i = 0;
	if (!start || !str)
		return (NULL);
	while (*start != '\0')
	{
		while (i++ < len)
		{
			if (*pstart == delim[i])
				pstart++;
			if (*start++ == delim[i])
				*start = '\0';
		}

	}
	if (i == len)
		start = pstart;
	if (*start == '\0')
		return (NULL);
	return (pstart);
}

int main()
{
	char str[] = "this is a simple string";
	char *test;
	test = ft_strtok(str, " ");
	while (test != NULL)
	{
		printf("%s\n", test);
		test = ft_strtok(NULL, " ");
	}
	return (0);
}
