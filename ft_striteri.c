/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:29:58 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:10:42 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Applies the function f to each character of the string passed
**	as argument, and passing its index as first argument. Each
**	character is passed by address to f to be modified if necessary.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
