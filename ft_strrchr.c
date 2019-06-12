/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 10:06:10 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/12 15:02:05 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*strrchr(const char *s, int c)
{
	 char	*str;

	str = ( char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		if (*str == c )
		{
			return (str);
		}
		str++;
	}
	return (str);
}
