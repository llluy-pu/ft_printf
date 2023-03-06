/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:19:32 by llluy-pu          #+#    #+#             */
/*   Updated: 2023/03/06 13:20:34 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
ft_puthex() is a function that takes in an unsigned integer and a boolean value
as parameters. It prints out the hexadecimal representation of the given 
number.
If the boolean value is 0, it prints out the lowercase version of the 
hexadecimal
representation, otherwise it prints out the uppercase version.
The function returns an integer representing the length of the hexadecimal 
representation. 
*/
int	ft_puthex(unsigned int n, int upper)
{
	char			*set;

	if (!upper)
		set = ft_strdup("0123456789abcdef");
	else
		set = ft_strdup("0123456789ABCDEF");
	if (n > 15)
		ft_puthex(n / 16, upper);
	ft_putchar(set[n % 16]);
	free(set);
	return (ft_nbrlen(n, 16));
}

/*
This function ft_ptrlen takes an unsigned long long n as a parameter 
and returns an integer.
The function first sets the integer len to 3. It then enters a while 
loop that will
continue to execute until n is less than 15. Inside the loop,
n is divided by 16 and len is incremented by 1. After the loop exits, 
len is returned.
*/
int	ft_ptrlen(unsigned long long n)
{
	int	len;

	len = 3;
	while (n > 15)
	{
		n /= 16;
		len++;
	}
	return (len);
}

/*
It prints out the hexadecimal representation of the unsigned long long integer. 
The function first creates a char pointer called set and sets it equal
to a duplicate of the string "0123456789abcdef". 
If the second parameter is true, it prints out "0x" to indicate that it is
a hexadecimal number. 
It then prints out the character at index n % 16 from set. 
Finally, it frees set and returns ft_ptrlen(n). 
*/
int	ft_putptr(unsigned long long n, int on)
{
	char	*set;

	set = ft_strdup("0123456789abcdef");
	if (on)
		ft_putstr("0x");
	if (n > 15)
		ft_putptr(n / 16, 0);
	ft_putchar(set[n % 16]);
	free(set);
	return (ft_ptrlen(n));
}
