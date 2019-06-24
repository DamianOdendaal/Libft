/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 10:14:18 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/24 11:02:17 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(const char *str, const char *delim)
{
	char	*start;
	size_t	len;
	char	*pstart;
	int		i;

	start = NULL;
	pstart = start;
	len = ft_strlen(delim);
	i = 0;
	if (!start || !str)
		return (NULL);
	while (*start)
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
	return (start);
}
