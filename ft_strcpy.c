/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:28:40 by dshults           #+#    #+#             */
/*   Updated: 2017/11/14 18:28:41 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	copy strings
**
**	DESCRIPTION
**     The strcpy() function copies the string src to dst (including
**     the terminating `\0' character.)
**
**
**	RETURN VALUES
**     The strcpy() function return dst.
*/

char	*ft_strcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
