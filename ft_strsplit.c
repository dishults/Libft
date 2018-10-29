/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:33:09 by dshults           #+#    #+#             */
/*   Updated: 2018/10/29 15:09:19 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Allocates (with malloc(3)) and returns an array of “fresh”
**  strings (all ending with ’\0’, including the array itself) obtained
**  by spliting s using the character c as a delimiter.
**
**  If the allocation fails the function returns NULL.
**  Example :
**      ft_strsplit("*hello*fellow***students*", ’*’);
**  returns the array ["hello", "fellow", "students"].
*/

#include "libft.h"

static void    skip(char const *s, int *i, char c)
{
    while (s[*i] == c)
        (*i)++;
}

static int    count_words(char const *s, int i, char c)
{
    int    words;

    words = 1;
    while (s[i])
    {
        if (s[i] == c)
        {
            skip(s, &i, c);
            if (s[i])
                words++;
        }
        else
            i++;
    }
    return (words);
}

static int    count_chars(char const *s, int i, char c)
{
    int    chr;

    chr = 0;
    while (s[i] && s[i] != c)
    {
        chr++;
        i++;
    }
    return (chr);
}

char		**ft_strsplit(char const *s, char c)
{
    int    i;
    int    w;
    int    chr;
    char    **words;

    i = 0;
    if (!s || !s[0])
        return (0);
    skip(s, &i, c);
    w = count_words(s, i, c);
    if (!(words = (char **)malloc(sizeof(char *) * (w + 1))))
		return (0);
    words[w] = NULL;
    w = 0;
    while (s[i])
    {
        chr = count_chars(s, i, c);
        words[w] = ft_strndup(s, chr);
        chr = 0;
        while (s[i] && s[i] != c)
            words[w][chr++] = s[i++];
        skip(s, &i, c);
        w++;
    }
    return (words);
}
