/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:31:56 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:23:34 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	copy strings
**
**	The strncpy() function copies at most len characters from src into dst.
**	If src is less than len characters long, the remainder of dst
**	is filled with `\0' characters.  Otherwise, dst is not terminated.
**
**	The source and destination strings should not overlap, as the behavior is
**	undefined.
*/

#include "libft.h"

char		*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
