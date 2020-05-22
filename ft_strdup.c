/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 22:02:50 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/09 22:02:50 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t i;
    char *d;
    size_t ss;

    i = 0;
    ss = ft_strlen((char *)s);
    d = (char*)malloc(sizeof(*d) * (ss + 1));
    if (!(d))
        return NULL;
    if (d)
    {
    while (i < ss)
    {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
    return d;
    }
    else
      return NULL;
}
