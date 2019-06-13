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

char	*ft_strrchr(const char *s, int c)
{
	 char	a;
	 int i;

	a = (char)c;
	i = 0;
	while (s[i] == '\0')
	{
		if(s[i] == '\0' || s[i] != a)
		{
			return (NULL);
		}
		else
			return ((char *)s[i]);
		i--;
	}
	return (0);// remember to use strlen 
}
