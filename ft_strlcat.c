<<<<<<< HEAD:ft_strlcat.c
#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t len_dst;
    size_t len_src;

    len_dst = ft_strlen(dest);
    len_src = ft_strlen(src);

    if (size <= len_dst)
        return (size + len_src);

    i = 0;
    while (src[i] != '\0' && (len_dst + i + 1) < size)
    {
        dest[len_dst + i] = src[i];
        i++;
    }

    dest[len_dst + i] = '\0';
    return (len_dst + len_src);
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzian <sbouzian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 13:56:34 by sbouzian          #+#    #+#             */
/*   Updated: 2026/02/08 13:56:38 by sbouzian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	if (dstsize <= dlen)
		return (dstsize + slen);
	while (src[i] && dlen + i < dstsize - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dlen + i < dstsize)
		dst[dlen + i] = '\0';
	return (dlen + slen);
>>>>>>> 3959c2e (subimos todas las funciones y archivos con header):Libft/ft_strlcat.c
}