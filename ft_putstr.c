/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:27:15 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:42:08 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Outputs the string s to the standard output.
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
}
