/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:33:40 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 17:58:25 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc(3)) and returns a “fresh” substring
**	from the string given as argument. The substring begins at
**	indexstart and is of size len. If start and len aren’t refering
**	to a valid substring, the behavior is undefined. If the
**	allocation fails, the function returns NULL.
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (!(sub = ft_strnew(len)))
		return (0);
	i = 0;
	while (len)
	{
		sub[i++] = s[start++];
		len--;
	}
	return (sub);
}
