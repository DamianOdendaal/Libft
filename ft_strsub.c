/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 12:16:43 by dodendaa          #+#    #+#             */
/*   Updated: 2019/06/10 12:16:47 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *substr;
	char *str;

	str = (char *)s;
	if(!s)
		return (NULL);
	if(!(substr = ft_strnew(ft_strlen(s))))
		return (NULL);
	len = ft_strlen(substr);
	start = len;
	if(!start || !len) 
		return (NULL);
	return (substr);
}
	
