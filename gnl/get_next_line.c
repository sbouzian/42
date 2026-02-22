/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzian <sbouzian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 17:39:55 by sbouzian          #+#    #+#             */
/*   Updated: 2026/02/22 18:01:12 by sbouzian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
 * ES: Lee del descriptor 'fd' hasta encontrar una nueva línea o EOF.
 * ES: Mantiene en 'stash' los datos leídos concatenados entre llamadas.
 * EN: Read from file descriptor 'fd' until a newline or EOF is found.
 * EN: Keep read data concatenated in 'stash' between calls.
 */
char	*read_file(int fd, char *stash)
{
	char	buffer[BUFFER_SIZE + 1];
	int		bytes;

	bytes = 1;
	while (!ft_strchr(stash, '\n') && bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
			return (free(stash), NULL);
		buffer[bytes] = 0;
		if (!stash)
			stash = ft_strdup("");
		stash = ft_strjoin(stash, buffer);
	}
	return (stash);
}

/*
 * ES: Extrae la línea (incluyendo '\n' si existe) desde 'stash'.
 * EN: Extract the next line (including '\n' if present) from 'stash'.
 */
char	*extract_line(char *stash)
{
	int	i;

	i = 0;
	if (!stash[i])
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (stash[i] == '\n')
		i++;
	return (ft_substr(stash, 0, i));
}

/*
 * ES: Elimina la línea extraída de 'stash' y devuelve el resto.
 * ES: Si no quedan datos libera y devuelve NULL.
 * EN: Remove the extracted line from 'stash' and return the rest.
 * EN: If no data remains free memory and return NULL.
 */
char	*clean_stash(char *stash)
{
	int		i;
	char	*new;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i])
		return (free(stash), NULL);
	new = ft_strdup(stash + i + 1);
	free(stash);
	return (new);
}

/*
 * ES: Función pública que devuelve la siguiente línea del descriptor 'fd'.
 * ES: Maneja 'stash' estático y errores de lectura.
 * EN: Public function returning next line from descriptor 'fd'.
 * EN: Manages static 'stash' and read errors.
 */
char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	stash = read_file(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(stash);
	stash = clean_stash(stash);
	return (line);
}
