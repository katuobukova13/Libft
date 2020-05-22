/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 16:36:42 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/06 16:36:42 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    char *s;
    size_t i;

	if (!dst || !src)
		return (0);
    i = 0;
    s = (char *)src;
    while (size > 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
        size--;
    }
    if (size > 0)
        dst[i] = '\0';
    return (ft_strlen(s));
}
