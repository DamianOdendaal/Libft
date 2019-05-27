/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:11:14 by dodendaa          #+#    #+#             */
/*   Updated: 2019/05/27 14:54:50 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *str)
{
	int		i;
	char	*new;

	i = 0;
	while (str[i] != '\0')
		i++;
	if (i == 0)
		i = 1;
	if (!(new = (char*)malloc(sizeof(char*) * (i))))
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		new[i] = str[i];
		i++;
	}
 
	new[i] = '\0';	
	return (new);
}
