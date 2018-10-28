/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:28:40 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 16:18:59 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	copy strings
**
** 	The strcpy() function copies the string src to dst (including
**	the terminating `\0' character.)
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
