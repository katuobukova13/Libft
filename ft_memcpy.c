/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <marvin@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 21:52:29 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/04 21:52:29 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	if (!src || !dest)
		return NULL;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while(n--)
		*d++ = *s++;
	return dest;
}
