/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_xy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:41:42 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:59:39 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates a map X by Y big
**
**	For example, x = 3 y = 3 would allocate map :
**		***
**		***
**		***
*/

#include "libft.h"

char	**ft_malloc_xy(size_t x, size_t y)
{
	char	**map;
	size_t	yy;

	yy = 0;
	map = (char **)malloc(sizeof(char *) * y);
	while (yy < y)
	{
		map[yy] = (char *)malloc(sizeof(char) * x);
		yy++;
	}
	return (map);
}
