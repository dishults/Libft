/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:31:02 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:11:43 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Applies the function f to each character of the string given
**	as argument to create a “fresh” new string (with malloc(3))
**	resulting from the successive applications of f.
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*fresh_str;
	unsigned int	i;

	i = 0;
	if (!(fresh_str = ft_strnew(ft_strlen(s))))
		return (0);
	while (s[i])
	{
		fresh_str[i] = f(s[i]);
		i++;
	}
	return (fresh_str);
}
