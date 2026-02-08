<<<<<<< HEAD:ft_strlcpy.c
#include "libft.h"

size_t ft_strlcpy(char *dest, const chat *src, size_t size)
{
    unsigned int    i;
    unsigned int    j;

    i = 0;
    while (src[i] != '\0')
    {
        i++;
    }
    if (size == 0)
    {
        return (i)
    }
    j = 0;
    while (j < size - 1 && src[j] != '\0')
    {
        dest[j] = src[j];
        j++;
    }
    dest[j] = '\0';
    return (i);
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzian <sbouzian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 13:55:56 by sbouzian          #+#    #+#             */
/*   Updated: 2026/02/08 13:56:11 by sbouzian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!src)
		return (0);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
>>>>>>> 3959c2e (subimos todas las funciones y archivos con header):Libft/ft_strlcpy.c
}