/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:17:34 by llluy-pu          #+#    #+#             */
/*   Updated: 2023/03/06 15:10:17 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(const char *s, int *i, va_list arg_n)
{
	char	type;

	if (!s[*i])
		return (0);
	type = s[(*i)++];
	if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(arg_n, int)));
	else if (type == 'u')
		return (ft_putnbr(va_arg(arg_n, unsigned int)));
	else if (type == 'x')
		return (ft_puthex(va_arg(arg_n, unsigned int), 0));
	else if (type == 'X')
		return (ft_puthex(va_arg(arg_n, unsigned int), 1));
	else if (type == 'c')
		return (ft_putchar(va_arg(arg_n, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(arg_n, char *)));
	else if (type == 'p')
		return (ft_prthex(va_arg(arg_n, void *)));
	else
		return (ft_putchar(type));
}
