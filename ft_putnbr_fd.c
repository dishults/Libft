/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:26:47 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:55:38 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Outputs the integer n to the file descriptor fd.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	tmp;
	unsigned int	length;

	length = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	tmp = n;
	while ((tmp /= 10) > 0)
	{
		length *= 10;
	}
	tmp = n;
	while (length)
	{
		ft_putchar_fd((char)((tmp / length)) + '0', fd);
		tmp %= length;
		length /= 10;
	}
}
