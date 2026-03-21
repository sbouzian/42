/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzian <sbouzian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:05:17 by sbouzian          #+#    #+#             */
/*   Updated: 2026/02/10 20:38:20 by sbouzian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * English:
 *   Return a newly allocated substring from the string 's', starting at index
 *   'start' and copying at most 'len' characters. If 'start' is greater than
 *   the length of 's', an empty string is returned. The returned string is
 *   NUL-terminated. Memory is allocated with malloc and must be freed by the
 *   caller.
 *
 *   Parameters:
 *     s     - source string (must not be NULL)
 *     start - index at which the substring begins
 *     len   - maximum number of characters to copy
 *
 *   Return:
 *     Pointer to the newly allocated substring, or NULL if allocation fails.
 *
 * Spanish:
 *   Devuelve una subcadena recién reservada de la cadena 's', empezando en el
 *   índice 'start' y copiando como máximo 'len' caracteres. Si 'start' es mayor
 *   que la longitud de 's', se devuelve una cadena vacía. La cadena devuelta
 *   está terminada en NUL. La memoria se asigna con malloc y debe liberarla el
 *   llamador.
 *
 *   Parámetros:
 *     s     - cadena origen (no debe ser NULL)
 *     start - índice desde el que comienza la subcadena
 *     len   - número máximo de caracteres a copiar
 *
 *   Retorno:
 *     Puntero a la subcadena asignada, o NULL si falla la asignación.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
