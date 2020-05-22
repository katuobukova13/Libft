/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 22:17:49 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/05 22:17:49 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr (const void *s, int c, size_t n)
{
	unsigned char *ss;
	size_t i;

	ss = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		if (ss[i] == (unsigned char)c)
			return ((void *)&ss[i]);
		i++;
	}
	return NULL;
}
