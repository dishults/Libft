/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:32:13 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:14:57 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Lexicographical comparison between s1 and s2 up to n characters
**	or until a ’\0’ is reached. If the 2 strings are identical,
**	the function returns 1, or 0 otherwise.
*/

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	return (ft_strncmp(s1, s2, n) == 0);
}
