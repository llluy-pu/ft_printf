/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:19:20 by llluy-pu          #+#    #+#             */
/*   Updated: 2022/11/05 17:35:18 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Reserva memoria (con malloc(3)) y devuelve un substring de la cadena
	's'. El substring comienza en el índice 'start' y tiene como máximo
	'size' caracteres. Si 'start' y 'size' no designan un substring
	válido, el comportamiento es indefinido. Si la asignación falla, la
	función devuelve NULL.
*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
