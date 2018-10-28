/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:27:02 by dshults           #+#    #+#             */
/*   Updated: 2018/10/28 15:53:40 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Outputs the string s to the file descriptor fd.
*/

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
