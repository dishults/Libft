/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:29:10 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:06:32 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes as a parameter the address of a string that needs to be
**	freed with free(3), then sets its pointer to NULL.
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}
