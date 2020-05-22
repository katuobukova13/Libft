/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 15:50:24 by qblinky           #+#    #+#             */
/*   Updated: 2020/04/30 15:50:24 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset (void *s, int c, size_t n)
{
    unsigned char *ss;

    ss = (unsigned char *)s;
    while (n--)
        *ss++ = (unsigned char)c;
    return s;
}
