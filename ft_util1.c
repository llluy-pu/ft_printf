/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:18:47 by llluy-pu          #+#    #+#             */
/*   Updated: 2023/03/06 13:22:34 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

/*
This function takes in a pointer to a character (char *) 
as an argument and prints it out.
If the argument is NULL, it prints out "(null)".
The function returns the number of characters printed. 
The function uses a while loop to iterate through the character string and prints
each character using ft_putchar().
The loop continues until it reaches the end of the string (s[i] is equal to 0).
The return value is set to i, which is the number of characters printed. 
*/
int	ft_putstr(char *s)
{
	int	i;

	if (!s)
		return (ft_putstr("(null)"));
	i = 0;
	while (s[i])
		ft_putchar((int) s[i++]);
	return (i);
}

/*
This function ft_nbrlen takes in two parameters,
a long long int n and an int base,and returns an int.
The purpose is to calculate the length of a number when converted
to a different base. 
The function starts by declaring an int len and setting it equal to 1.
It then checks if the number is negative, and if it is,
it multiplies the number by -1 and adds 1 to len.
It then enters a while loop that runs while n is greater than the base minus 1.
Inside the loop, len is incremented by 1 and n is divided by the base.
Finally, the function returns len.
*/
int	ft_nbrlen(long long int n, int base)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > base - 1)
	{
		len++;
		n /= base;
	}
	return (len);
}

/*
This function ft_putnbr() takes a long long int variable n as an argument.
It first calculates the length of the number using the ft_nbrlen() function
and stores it in the variable len.
If n is negative, it prints a '-' character and multiplies n by -1
to make it positive.
If n is greater than 9, it calls itself recursively
with n divided by 10 as its argument.
Finally, it prints the last digit of n (n % 10) plus '0' to get its ASCII value
and returns len. 
*/
int	ft_putnbr(long long int n)
{
	int	len;

	len = ft_nbrlen(n, 10);
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
	return (len);
}
