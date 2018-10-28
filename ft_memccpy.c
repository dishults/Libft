/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:19:59 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:01:40 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	copy string until character found
**
**	The memccpy() function copies bytes from string src to string dst.  If
**	the character c (as converted to an unsigned char) occurs in the string
**	src, the copy stops and a pointer to the byte after the copy of c in the
**	string dst is returned.  Otherwise, n bytes are copied, and a NULL
**	pointer is returned.
**
**	The source and destination strings should not overlap, as the behavior is
**	undefined.
*/

#include "libft.h"

void				*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*destination;
	unsigned char	*source;

	i = 0;
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (i < n)
	{
		destination[i] = source[i];
		if (source[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
