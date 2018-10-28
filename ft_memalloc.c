/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:19:47 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:01:14 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Allocates (with malloc(3)) and returns a “fresh” memory area.
**	The memory allocated is initialized to 0. If the allocation
**	fails, the function returns NULL.
*/

void	*ft_memalloc(size_t size)
{
	void	*fresh_mem;

	if (!(fresh_mem = (size_t *)malloc(size)) || size > 4294967295)
		return (0);
	else
		return (ft_memset(fresh_mem, 0, size));
}
