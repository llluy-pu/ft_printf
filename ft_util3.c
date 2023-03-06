/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:39:35 by llluy-pu          #+#    #+#             */
/*   Updated: 2023/03/06 15:09:03 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
This function takes in a string as a parameter, finds the length of the string,
and prints it out in reverse. It returns the number of characters printed. 
*/
int	ft_revprint(char *hexa)
{
	int	len;
	int	rtrn;

	len = ft_strlen(hexa) - 1;
	rtrn = 0;
	while (len >= 0)
		rtrn += write(1, &hexa[len--], 1);
	return (--rtrn);
}

/*
This code is a function that takes an unsigned long integer as a parameter and
converts it to its hexadecimal representation. It stores the hexadecimal
representation in an array called "hexa" and then calls another function,
ft_revprint(), to print the hexadecimal representation in reverse order.
The function returns the number of characters printed plus one.
*/
int	ft_hextoprt(unsigned long addr)
{
	int		i;
	int		temp;
	char	hexa[42];

	i = 0;
	while (addr != 0)
	{
		temp = addr % 16;
		if (temp < 10)
			hexa[i++] = temp + 48;
		else
			hexa[i++] = temp + 87;
		addr = addr / 16;
	}
	hexa[i] = '\0';
	return (ft_revprint(hexa) + 1);
}

/*
ft_prthex() is a function that takes in a void pointer as an argument and prints
the address of the pointer in hexadecimal format. 
If the pointer is equal to 0, it will print "(nil)" instead. It calls
ft_hextoprt() to convert the address to hexadecimal format and returns the number
of characters printed plus 2 (for "0x").
*/
int	ft_prthex(void *ptr_addr)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (ptr_addr == 0)
		len += write(1, "0", 1);
	else
	{
		len += ft_hextoprt((unsigned long)ptr_addr);
	}
	return (len);
}
