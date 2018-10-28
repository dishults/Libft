/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:18:05 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:54:32 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	alphanumeric character test
**
**	The isalnum() function tests for any character for which isalpha(3) or
**	isdigit(3) is true.  The value of the argument must be representable as
**	an unsigned char or the value of EOF.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
