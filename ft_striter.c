/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:29:51 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:10:16 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Applies the function f to each character of the string passed as argument.
**	Each character is passed by address to f to be modified if necessary.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}
