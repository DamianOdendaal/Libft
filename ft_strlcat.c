/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:29:15 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/05 16:40:22 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	*ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (dst[i] != '\0')// got the index of the first string to the null 
	{
		i++;
	}
	while (src[j] != '\0')// essentially you are trying to replace the '\0' of s1 with the first index of the second string  
	{
		dst
	}
}
