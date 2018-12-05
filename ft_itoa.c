/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:19:32 by dshults           #+#    #+#             */
/*   Updated: 2018/12/05 15:20:20 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Converts integer to string
*/

#include "libft.h"

static int	ft_num_len(int n)
{
	int		i;

	i = 1;
	if (n < 0)
		i++;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	int				num_len;

	num = (unsigned int)n;
	num_len = ft_num_len(n);
	if (!(str = ft_strnew(num_len)))
		return (0);
	if (n < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	str[--num_len] = num % 10 + '0';
	while (num /= 10)
		str[--num_len] = num % 10 + '0';
	return (str);
}
