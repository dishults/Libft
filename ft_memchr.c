/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:20:31 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:07:48 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	locate byte in byte string
**
**	The memchr() function locates the first occurrence of c
**	(converted to an unsigned char) in string s and
**
**	returns a pointer to the byte located, or NULL if
**	no such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (0);
}
