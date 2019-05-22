/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shahkhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:17:23 by shahkhan          #+#    #+#             */
/*   Updated: 2019/05/22 10:27:21 by shahkhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*dst;

	if (s)
	{
		i = 0;
		j = ft_strlen((char *)(s)) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (!(dst = (char*)malloc(sizeof(*dst) * (j - i + 1))))
			return (NULL);
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		k = 0;
		while (i <= j)
		{
			dst[k++] = s[i];
			i++;
		}
		dst[k] = '\0';
		return (dst);
	}
	return (NULL);
}
