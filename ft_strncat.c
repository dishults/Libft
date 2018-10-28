/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:31:25 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:31:54 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	concatenate strings
**
**	The strcat() and strncat() functions append a copy of the null-terminated
**	string s2 to the end of the null-terminated string s1, then add a termi-
**	nating `\0'.  The string s1 must have sufficient space to hold the
**	result.
**
**	The strncat() function appends not more than n characters from s2, and
**	then adds a terminating `\0'.
*/

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	int		n;

	i = 0;
	n = 0;
	while (dest[n])
		n++;
	while (src[i] && i < nb)
	{
		dest[n] = src[i];
		i++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
