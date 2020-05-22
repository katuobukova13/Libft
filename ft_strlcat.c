/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 01:20:22 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/07 01:20:22 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    char *s;
    size_t len_d;
    size_t len_s;
    size_t len;

    s = (char *)src;
    len_d = ft_strlen(dst);
    len_s = ft_strlen(s);
    len = len_d;
    if (size <= len_d)
        return (len_s + size);
    while (*s != '\0' && len < (size - 1))
        *(dst + len++) = *s++;
    if (len < size)
        *(dst + len) = '\0';
    return (len_d + len_s);
}
