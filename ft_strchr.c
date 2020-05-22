/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 21:57:34 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/07 21:57:34 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
	int j;
	char *ss;

	i = 0;
	ss = (char *)s;
	j = ft_strlen(ss);
	while (i < j && ss[i] != (char)c)
			i++;
	return (ss[i] == (char)c ? &ss[i] : NULL);
}
