/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 01:12:29 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/18 01:12:29 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (lst == NULL)
    	return ;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
	return ;
}
