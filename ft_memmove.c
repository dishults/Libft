/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:21:38 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:05:34 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	copy byte string
**
**	The memmove() function copies len bytes from string src to string dst.
**	The two strings may overlap;
**	the copy is always done in a non-destructive manner.
*/

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destination;
	char	*source;

	destination = (char *)dest;
	source = (char *)src;
	if (source < destination)
	{
		source += n - 1;
		destination += n - 1;
		while (n > 0)
		{
			*destination-- = *source--;
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*destination++ = *source++;
			n--;
		}
	}
	return (dest);
}
