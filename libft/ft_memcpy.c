/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:28:43 by llluy-pu          #+#    #+#             */
/*   Updated: 2022/11/05 17:17:14 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Copia area de memoria, devuelve un puntero a dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pt_dest;
	char	*pt_src;

	pt_dest = (char *)dest;
	pt_src = (char *)src;
	i = 0;
	if ((pt_dest != NULL) || (pt_src != NULL))
	{
		while (i < n)
		{
			pt_dest[i] = pt_src[i];
			i++;
		}
	}
	return (dest);
}
