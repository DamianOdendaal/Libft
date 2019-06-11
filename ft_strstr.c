/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:36:22 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/11 14:36:33 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

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
	int j;

	i = 0;
	j = 0;
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
	return ((char *)s1);
}

int main ()
{
	char a[] = "Strstr is a weak function";
	char b[] = "weak";
	printf("%s \n", ft_strstr(a,b));
	return (0);
}

