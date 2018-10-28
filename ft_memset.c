/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:21:51 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 17:01:05 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	fill a byte string with a byte value
**
**	The memset() function writes len bytes of value c (converted to an
**	unsigned char) to the string b.
*/

#include "libft.h"

void		*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
