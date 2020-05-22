/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qblinky <qblinky@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 13:21:54 by qblinky           #+#    #+#             */
/*   Updated: 2020/05/16 13:21:54 by qblinky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    int res;

    if (fd < 0)
        return ;
    if (n == -2147483648)
    {
		ft_putstr_fd("-2147483648", fd);
        	return ;
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        res = -n;
        ft_putnbr_fd(res, fd);
        return ;
    }
    if (n >= 0)
        res = n;
    if (n >= 10)
        ft_putnbr_fd(res/10, fd);
    ft_putchar_fd((res % 10) +'0', fd);
}
