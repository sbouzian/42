/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzian <sbouzian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 17:45:33 by sbouzian          #+#    #+#             */
/*   Updated: 2026/02/22 17:59:07 by sbouzian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
 * ES: Calcula y devuelve la longitud de la cadena 's'. Si 's' es NULL,
 * ES: devuelve 0.
 * EN: Compute and return the length of the string 's'. If 's' is NULL,
 * EN: return 0.
 */
int	ft_strlen(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

/*
 * ES: Busca la primera ocurrencia del carácter 'c' en la cadena 's'.
 * ES: Devuelve un puntero a la posición encontrada o NULL si no existe.
 * EN: Find the first occurrence of character 'c' in string 's'.
 * EN: Return a pointer to the found position or NULL if not found.
 */
char	*ft_strchr(char *s, int c)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}

/*
 * ES: Reserva memoria y duplica la cadena 's', devolviendo el nuevo puntero.
 * EN: Allocate memory and duplicate the string 's', returning the new ptr.
 */
char	*ft_strdup(char *s)
{
	char	*new;
	int		i;

	new = malloc(ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
 * ES: Crea una subcadena desde 'start' con longitud 'len'. Si 'start' está
 * ES: fuera de la cadena devuelve una cadena vacía con malloc.
 * EN: Create a substring from 'start' with length 'len'. If 'start' is
 * EN: beyond the string, return an empty malloc'd string.
 */
char	*ft_substr(char *s, int start, int len)
{
	char	*new;
	int		i;

	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
		new[i++] = s[start++];
	new = 0;
	return (new);
}

/*
 * ES: Concatena 's1' y 's2' en un nuevo buffer. Libera 's1' antes de
 * ES: devolver el nuevo puntero.
 * EN: Join 's1' and 's2' into a new buffer. Free 's1' before returning
 * EN: the new pointer.
 */
char	*ft_strjoin(char *s1, char *s2)
{
	char	*new;
	int		i;
	int		j;

	new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	i = -1;
	j = 0;
	while (s1 && s1[++i])
		new[i] = s1[i];
	while (s2 && s2[j])
		new[i++] = s2[j++];
	new[i] = 0;
	free(s1);
	return (new);
}
