/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzian <sbouzian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:02:59 by sbouzian          #+#    #+#             */
/*   Updated: 2026/02/10 20:16:50 by sbouzian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* English:Locate the first occurrence of needle in haystack within len bytes.*/
/* Spanish: Localiza la primera ocurrencia de needle en haystack dentro de len
bytes. */
char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*n)
		return ((char *)h);
	i = 0;
	while (h[i] && i < len)
	{
		j = 0;
		while (n[j] && h[i + j] && i + j < len
			&& h[i + j] == n[j])
			j++;
		if (!n[j])
			return ((char *)&h[i]);
		i++;
	}
	return (NULL);
}
