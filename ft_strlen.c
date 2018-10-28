/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:30:41 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:12:14 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	find length of string
**
**	The strlen() function computes the length of the string s.
*/

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t length;

	length = 0;
	while (str[length])
	{
		length++;
	}
	return (length);
}
