/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:35:31 by llluy-pu          #+#    #+#             */
/*   Updated: 2022/11/05 17:42:41 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 Reserva memoria (con malloc(3)) y devuelve una cadena de caracteres que
 representa el número entero recibido como argumento.
*/

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	i = ft_intlen(n);
	sign = 1;
	if (n < 0)
		sign = -1;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	while (i > 0)
	{
		str[i - 1] = (n % 10) * sign + '0';
		n = n / 10;
		i--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
