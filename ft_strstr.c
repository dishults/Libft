/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:33:17 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:38:36 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	locate a substring in a string
**
**	The strstr() function locates the first occurrence of the null-terminated
**	string needle in the null-terminated string haystack.
**
**	If needle is an empty string, haystack is returned; if needle occurs
**	nowhere in haystack, NULL is returned; otherwise a pointer to the first
**	character of the first occurrence of needle is returned.
*/

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int n;

	i = 0;
	if (!to_find[i])
		return ((char *)str);
	while (str[i])
	{
		n = 0;
		while (to_find[n] == str[i + n])
		{
			if (to_find[n + 1] == '\0')
				return ((char *)str + i);
			n++;
		}
		i++;
	}
	return (0);
}
