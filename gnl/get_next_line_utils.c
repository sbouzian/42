/* ************************************************************************** */
/*                    */
/*              :::    ::::::::   */
/*   get_next_line_utils.c        :+:   :+: :+:   */
/*              +:+ +:+    +:+   */
/*   By: sbouzian <sbouzian@student.42.fr>    +#+  +:+       +#+  */
/*            +#+#+#+#+#+   +#+  */
/*   Created: 2026/02/21 19:41:39 by sbouzian      #+#  #+#        */
/*   Updated: 2026/02/21 20:57:55 by sbouzian      ###   ########.fr   */
/*                    */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t i;

	i = 0;
	if (!s)
        return (0);
    while (s[i])
        i++;
    return (i);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char	*res;
    size_t  i;
    size_t  j;

    if (!s1 && !s2)
        return (NULL);
    if (!s1)
        return ft_strdup(s2);
    if (!s2)
        return ft_strdup(s1);
    res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!res)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
    {
        res[i] = s1[i];
        i++;
    }
    while (s2[j])
        res[i++] = s2[j++];
    res[i] = '\0';
    return (res);
}

char    *ft_strdup(const char *s1)
{
    char    *dup;
    size_t  i;

    dup = (char *)malloc(ft_strlen(s1) + 1);
    if (!dup)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}