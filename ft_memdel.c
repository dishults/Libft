/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:21:24 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:06:26 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes as a parameter the address of a memory area that needs
**	to be freed with free(3), then puts the pointer to NULL.
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
