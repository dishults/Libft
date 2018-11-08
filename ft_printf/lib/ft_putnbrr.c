/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:47:01 by dshults           #+#    #+#             */
/*   Updated: 2018/11/08 12:02:54 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putnbrr(long long n)
{
	unsigned long long	tmp;
	unsigned long long	length;
	int					ret;

	length = 1;
	ret = 0;
	if (n < 0)
	{
		ft_putcharr('-');
		n = -n;
		ret++;
	}
	tmp = n;
	while ((tmp /= 10) > 0)
		length *= 10;
	tmp = n;
	while (length)
	{
		ft_putcharr((char)((tmp / length)) + 48);
		tmp %= length;
		length /= 10;
		ret++;
	}
	return (ret);
}

int	ft_putnbr_u(unsigned long long n)
{
	unsigned long long	tmp;
	unsigned long long	length;
	int					ret;

	length = 1;
	tmp = n;
	ret = 0;
	while ((tmp /= 10) > 0)
	{
		length *= 10;
	}
	tmp = n;
	while (length)
	{
		ft_putcharr((char)((tmp / length)) + 48);
		tmp %= length;
		length /= 10;
		ret++;
	}
	return (ret);
}
