/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:32:45 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:40:25 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	locate a substring in a string
**
**	The strnstr() function locates the first occurrence of the null-termi-
**	nated string needle in the string haystack, where not more than len char-
**	acters are searched. Characters that appear after a `\0' character are
**	not searched. Since the strnstr() function is a FreeBSD specific API, it
**	should only be used when portability is not a concern.
**
**	If needle is an empty string, haystack is returned; if needle occurs
**	nowhere in haystack, NULL is returned; otherwise a pointer to the first
**	character of the first occurrence of needle is returned.
*/

#include "libft.h"

char		*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		n = 0;
		while (to_find[n] == str[i + n] && i + n < len)
		{
			n++;
			if (to_find[n] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
