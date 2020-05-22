/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 14:09:00 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/09 14:09:00 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *dest;

	dest = malloc(nmemb * size);
	if (!(dest))
		return (NULL);
	ft_memset(dest, 0, nmemb * size);
    return dest;
}
