/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 09:44:42 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/20 10:32:15 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{	
	char *str;
	int i;

	str = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	i = 0;
	if(!str || !s1 || !s2)
		return (NULL);
	str = ft_strcat(ft_strcpy(str,(char *)s1), (char *)s2);
	return (str);
}
