/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:01:29 by llluy-pu          #+#    #+#             */
/*   Updated: 2022/11/05 17:13:49 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La función memset de C *memset(void *str, int c, size_t n) 
copia el caracter c (un char sin signo) a los primeros n caracteres de str.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*string;

	string = (char *)str;
	i = 0;
	while (i < n)
	{
		string[i] = c;
		i++;
	}
	return (str);
}
