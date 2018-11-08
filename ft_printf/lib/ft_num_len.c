/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 18:04:45 by dshults           #+#    #+#             */
/*   Updated: 2018/11/08 12:02:58 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int    num_len_base(size_t value, int base)
{
    int    len;

    len = 1;
    while (value /= base)
        len++;
    return (len);
}

int	ft_num_lenn_u(size_t n)
{
	int		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

int	ft_num_lenn(long long n)
{
	int		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}
