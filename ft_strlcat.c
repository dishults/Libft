/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:30:30 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:30:18 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	size-bounded string copying and concatenation
**
**	The strlcpy() and strlcat() functions copy and concatenate strings with
**	the same input parameters and output result as snprintf(3).  They are
**	designed to be safer, more consistent, and less error prone replacements
**	for the easily misused functions strncpy(3) and strncat(3).
**
**	strlcat() appends string src to the end of dst.  It will append at most
**	dstsize - strlen(dst) - 1 characters.  It will then NULL-terminate, unless
**	dstsize is 0 or the original dst string was longer than dstsize (in prac-
**	tice this should not happen as it means that either dstsize is incorrect
**	or that dst is not a proper string).
*/

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	if (src_len < size - dst_len)
	{
		ft_memcpy(dst + dst_len, src, src_len);
		dst[dst_len + src_len] = '\0';
	}
	else
	{
		ft_memcpy(dst + dst_len, src, size - dst_len - 1);
		dst[size - 1] = '\0';
	}
	return (src_len + dst_len);
}
