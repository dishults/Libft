/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <dshults@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 18:33:09 by dshults           #+#    #+#             */
/*   Updated: 2018/10/25 15:25:08 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
            words++;
            skip(s, &i, c);
            if (!s[i])
                words--;
        }
        else
            i++;
    }
    return (words);
}

static int    count_chars(char const *s, int i, char c)
{
    int    l;

    l = 0;
    while (s[i])
    {
        l++;
        i++;
        if (s[i] == c)
            break;
    }
    return (l);
}

char		**ft_strsplit(char const *s, char c)
{
    int    i;
    int    w;
    int    l;
    char    **words;

    i = 0;
    if (!s || !s[0])
        return (0);
    skip(s, &i, c);
    w = count_words(s, i, c);
    words = (char **)malloc(sizeof(char *) * (w + 1));
    words[w] = NULL;
    w = 0;
    while (s[i])
    {
        l = count_chars(s, i, c);
        words[w] = (char *)malloc(sizeof(char) * (l + 1));
        words[w][l] = '\0';
        l = 0;
        while (s[i] && s[i] != c)
            words[w][l++] = s[i++];
        skip(s, &i, c);
        w++;
    }
    return (words);
}
