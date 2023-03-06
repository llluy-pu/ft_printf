/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:41:13 by llluy-pu          #+#    #+#             */
/*   Updated: 2022/11/05 17:46:29 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Imprime la cadena s en el descriptor de fichero dado seguida de un salto de
	línea.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	len;

	len = -1;
	while (s[++len] != 0)
		;
	write(fd, s, len);
	write(fd, "\n", 1);
}
