/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:11:14 by dodendaa          #+#    #+#             */
/*   Updated: 2019/05/21 13:00:12 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		i;
	char	*new;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
		new = (char*)malloc(sizeof(char*) * (i + 1));
		i = 0;
	}
	while (str[i] != '\0')
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
