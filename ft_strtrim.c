/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:34:04 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:37:47 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc(3)) and returns a copy of the string
**	given as argument without whitespaces at the beginning or at
**	the end of the string. Will be considered as whitespaces the
**	following characters ’ ’, ’\n’ and ’\t’. If s has no whitespaces
**	at the beginning or at the end, the function returns a
**	copy of s. If the allocation fails the function returns NULL.
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	len = (int)ft_strlen(s);
	while (s[len - 1] == ' ' || s[len - 1] == '\t' || s[len - 1] == '\n')
		len--;
	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	while (i < len)
		str[i++] = *s++;
	str[i] = '\0';
	return (str);
}
