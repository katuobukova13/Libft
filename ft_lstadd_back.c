/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 18:23:37 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/17 18:23:37 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (lst == NULL || new == NULL)
    	return ;
    if (*lst)
    {
    last = ft_lstlast(*lst);
    new->next = last->next;
    last->next = new;
    }
	return ;
}
