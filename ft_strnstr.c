/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzian <sbouzian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:02:59 by sbouzian          #+#    #+#             */
/*   Updated: 2026/02/08 18:20:21 by sbouzian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
