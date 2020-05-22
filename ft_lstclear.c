/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 00:31:24 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/18 00:31:24 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *p;
	t_list *q;

	q = *lst;
	while (q)
	{
		p = q->next;
		ft_lstdelone(q, del);
		q = p;
	}
	*lst = NULL;
}
