/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:32:33 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:04:31 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc(3)) and returns a “fresh” string ending
**	with ’\0’. Each character of the string is initialized at
**	’\0’. If the allocation fails the function returns NULL.
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh_str;

	if (!(fresh_str = (char *)malloc(size + 1)))
		return (0);
	ft_bzero(fresh_str, size + 1);
	return (fresh_str);
}
