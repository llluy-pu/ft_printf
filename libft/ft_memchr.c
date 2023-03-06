/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:49:47 by llluy-pu          #+#    #+#             */
/*   Updated: 2022/11/05 17:26:52 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Localiza la primera ocurrencia de c (convertido a un unsigned char) en los
 primeros n bytes de la cadena apuntada por s.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
