/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:29:23 by dshults           #+#    #+#             */
/*   Updated: 2017/11/14 18:29:24 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char		*ft_strndupp(const char *s, size_t n)
{
	size_t	i;
	char	*copy;

	i = 0;
	if (!(copy = (char*)malloc(sizeof(char) * (n + 1))))
		return (0);
	else
	{
		while (i < n)
		{
			copy[i] = s[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
}

wchar_t		*ft_strndup_w(wchar_t *s, size_t n)
{
	size_t	i;
	wchar_t	*copy;

	i = 0;
	if (!(copy = (wchar_t*)malloc(sizeof(wchar_t) * (n + 1))))
		return (0);
	else
	{
		while (i < n)
		{
			copy[i] = s[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
}
