/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:21:09 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:58:50 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	copy memory area
**
**	The memcpy() function copies n bytes from memory area src to memory area
**	dst.  If dst and src overlap, behavior is undefined.  Applications in
**	which dst and src might overlap should use memmove(3) instead.
*/

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destination;
	char	*source;

	i = 0;
	destination = (char *)dest;
	source = (char *)src;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}
