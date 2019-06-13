/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:36:22 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/13 11:25:52 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
{	
	int len;

	len = 0;

	if (!needle)
		return ((char *)haystack);
	while (*haystack)
	{
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
			len++;
		}
		if (*needle == '\0')
			return ((char *)haystack - len);
		needle -= len;
		len = 0;
		haystack++;
	}
	return (NULL);



}
