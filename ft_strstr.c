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

char	*ft_strstr(const char *haystack, const char *needle)
{
	
	while (*haystack == *needle)
	{
		
		if (*haystack == '\0')
		{
			return (NULL);
		}
		haystack++;

		
	}
	return (haystack);
	
	if (!needle)
	{
		return (haystack);
	}
}
