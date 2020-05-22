/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 13:32:20 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/12 13:32:20 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	unsigned int ss1;
	unsigned int ss2;
	unsigned int i;
	unsigned int j;
	char *str;

	if (!s1 && !s2)
		return NULL;
	ss1 = ft_strlen((char *)s1);
	ss2 = ft_strlen((char *)s2);
	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (ss1 + ss2 + 1));
	if (!(str))
        return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
    return (str);
}
