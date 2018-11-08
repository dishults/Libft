/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrconvert_base.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 18:04:45 by dshults           #+#    #+#             */
/*   Updated: 2018/11/08 11:53:17 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

/*
** ! Only for ft_printf !
** As it handles only unsigned numbers
** No support for signed negative ones
*/

int    num_length(size_t value, int base)
{
    int    len;

    len = 1;
    while (value /= base)
        len++;
    return (len);
}
