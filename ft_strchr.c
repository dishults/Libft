/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:27:58 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 17:59:03 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	locate character in string
**
**	The strchr() function locates the first occurrence of c (converted to a
**	char) in the string pointed to by s. The terminating null character is
**	considered to be part of the string; therefore if c is `\0',
**	the functions locate the terminating `\0'.
**
**	The functions strchr() and strrchr() return a pointer to the located
**	character, or NULL if the character does not appear in the string.
*/

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (0);
}
