/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:17:50 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:59:39 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	write zeroes to a byte string
**
**	The bzero() function writes n zeroed bytes to the string s.
**	If n is zero, bzero() does nothing.
*/

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
