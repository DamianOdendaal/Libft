/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:02:35 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/20 17:18:25 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	const char	*start;
	const char	*end;
	char		*new;
	size_t		len;
	
	new = NULL;
	if (s)
	{
		len = 0;
		end = (s + (ft_strlen(s)));
		while (ft_iswhitespace(*s) == 1)
			s++;
		start = s;
		while (ft_iswhitespace(*(end -1) == 1 && end != start))
			end--;
		while (s++ != end)
			len++;
		if(!(new = ft_strsub(start, 0, len)))
			return (NULL);
	}
	return (new);
}
