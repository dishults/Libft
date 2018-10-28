/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:32:59 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:36:40 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	locate character in string
**
**	The strrchr() function is identical to strchr(), except it locates the
**	last occurrence of c.
**
**	The functions strchr() and strrchr() return a pointer to the located
**	character, or NULL if the character does not appear in the string.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = (int)ft_strlen((char *)s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
