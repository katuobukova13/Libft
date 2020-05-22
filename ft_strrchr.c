/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 02:10:53 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/08 02:10:53 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;
	char *ss;

	ss = (char *)s;
	i = ft_strlen(ss);
	while (i >= 0 && ss[i] != (char)c)
		i--;
	return (ss[i] == (char)c ? &ss[i] : NULL);
}
