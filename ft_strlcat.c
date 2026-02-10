/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzian <sbouzian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 13:56:34 by sbouzian          #+#    #+#             */
/*   Updated: 2026/02/10 20:16:04 by sbouzian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Append src to the end of dst, taking the full size of the destination buffer
 * (dstsize) and guaranteeing NUL-termination if dstsize is greater than 0.
 * Returns the length of the string it tried to create (initial length of dst
 * plus length of src).
 *
 * Anexa src al final de dst respetando el tamaño total del buffer destino
 * (dstsize) y garantiza la terminación NUL si dstsize es mayor que 0.
 * Devuelve la longitud de la cadena que intentó crear (longitud inicial de dst
 * más longitud de src).
 */
/* English: Append src to dst of size dstsize, return total length attempted. */
/* Spanish:Añade src a dst de tamaño dstsize, devuelve la longitud total
intentada.*/
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
}
