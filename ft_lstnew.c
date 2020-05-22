/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 21:28:25 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/16 21:28:25 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new;

	if (!content)
		return (NULL);
	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = malloc(sizeof(content));
	if (!(new->content))
		return (NULL);
	ft_memcpy(new->content, content, sizeof(content));
	new->next = NULL;
	return (new);
}
