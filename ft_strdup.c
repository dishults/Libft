/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:29:23 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:18:11 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	save a copy of a string
**
**	The strdup() function allocates sufficient memory for a copy of the
**	string s1, does the copy, and returns a pointer to it.  The pointer may
**	subsequently be used as an argument to the function free(3).
**
**	If insufficient memory is available, NULL is returned and errno is set to
**	ENOMEM.
*/

#include "libft.h"

char		*ft_strdup(const char *s)
{
	int		i;
	int		length;
	char	*copy;

	i = 0;
	length = 0;
	while (s[length])
		length++;
	if (!(copy = (char*)malloc(sizeof(char) * (length + 1))))
		return (0);
	else
	{
		while (i < length)
		{
			copy[i] = s[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
}
