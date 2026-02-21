/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouzian <sbouzian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 14:09:31 by sbouzian          #+#    #+#             */
/*   Updated: 2026/02/10 20:10:41 by sbouzian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* English: Write a character to the given file descriptor. */
/* Spanish: Escribe un carácter en el descriptor de archivo dado. */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
