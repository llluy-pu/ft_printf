/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:18:04 by llluy-pu          #+#    #+#             */
/*   Updated: 2022/11/05 17:33:04 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Copia la cadena apuntada por s, incluyendo el carácter nulo final, a una
	nueva cadena de memoria alocada con malloc(3). Si la asignación falla, la
	función devuelve NULL.
*/

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		len;
	int		i;

	len = (int) ft_strlen(s) + 1;
	new = malloc(sizeof (char) * len);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = 0;
	return (new);
}
