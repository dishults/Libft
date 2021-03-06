/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:28:13 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:08:32 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Sets every character of the string to the value ’\0’.
*/

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}
