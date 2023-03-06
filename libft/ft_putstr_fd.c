/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:40:18 by llluy-pu          #+#    #+#             */
/*   Updated: 2022/11/05 17:46:12 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Imprime la cadena s en el descriptor de fichero dado.
*/

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (!s)
		return ;
	len = -1;
	while (s[++len] != 0)
		;
	write(fd, s, len);
}
