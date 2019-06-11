/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:15:20 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/11 14:32:01 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char *dup;
	
	i = 0;
	dup = (unsigned char *)s;
	while (i < n)
	{
		if (*dup == c)
		{
			return ((unsigned char *)s);
		} 
		i++;
		dup++;
	}
	return (NULL);
}

