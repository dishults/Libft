/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:18:15 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:52:11 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	alphabetic character test
**
**	The isalpha() function tests for any character for which isupper(3) or
**	islower(3) is true.  The value of the argument must be representable as
**	an unsigned char or the value of EOF.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
