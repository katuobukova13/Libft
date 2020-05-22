/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 16:16:12 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/08 16:16:12 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    long long int res;
    int sign;
    long long int x;

    i = 0;
    res = 0;
    sign = 1;
    while ((nptr[i] == ' ') || (nptr[i] == '\t') || (nptr[i] == '\r')
        || (nptr[i] == '\b') || (nptr[i] == '\f') || (nptr[i] == '\n')
        || (nptr[i] == '\v'))
        i++;
    if (nptr[i] == '-' || (nptr[i] == '+'))
    {
        if (nptr[i] == '-')
            sign = -1;
        i++;
    }
    while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
        {
		x = (res * 10) + (nptr[i] - '0');
		i++;
        if (x < res)
            return (sign > 0 ? -1 : 0);
        res = x;
        }
    return (res*sign);
}
