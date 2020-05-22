/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 02:56:46 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/08 02:56:46 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	char *l;
	char *b;

	if (!*big)
		return (NULL);
	if (!*little)
		return ((char *)big);
	l = (char *)little;
	b = (char *)big;
	i = 0;
	while (b[i] != '\0'&& i < len)
	{
		j = 0;
		while (l[j] == b[i + j] && i + j < len)
		{
			if (l[j + 1] == '\0')
				return(&b[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
