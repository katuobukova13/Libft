/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 01:19:15 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/18 01:19:15 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *new_next;
    t_list  *curr;

    if (lst == NULL)
    	return (NULL);
    if ((new = ft_lstnew(f(lst->content))) == NULL)
        return (NULL);
    curr = new;
    lst = lst->next;
    while (lst)
    {
        if ((new_next = ft_lstnew(f(lst->content))) == NULL)
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        curr->next = new_next;
        curr = new_next;
        lst = lst->next;
    }
    return (new);
}
