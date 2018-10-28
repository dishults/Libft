/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:29:37 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 13:10:17 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Lexicographical comparison between s1 and s2.
**	If the 2 strings are identical the function returns 1, or 0 otherwise.
*/

int		ft_strequ(char const *s1, char const *s2)
{
	return (ft_strcmp(s1, s2) == 0);
}
