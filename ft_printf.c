/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:18:31 by llluy-pu          #+#    #+#             */
/*   Updated: 2023/03/06 17:43:49 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
This function is used to print a formatted string. 
It takes in a const char pointer "format" and a variable number of arguments. 
It uses the va_list argument list to store the additional arguments passed into
the function. 
The function then uses a while loop to iterate through the format string
and checks for any special characters, such as '%'. 
If it finds one, it calls ft_check() which handles the formatting of the special
character and adds it to the len variable. 
If it does not find one, it calls ft_putchar() which prints out the character
and adds it to len. 
Once all characters have been processed, va_end() is called and the total
length of all characters printed is returned. 
*/
int	ft_printf(const char *format, ...)
{
	va_list		arg_n;
	int			i;
	int			len;

	va_start(arg_n, format);
	i = 0;
	len = 0;
	while (format[i])
	{
		if (format[i] == '%' && ++i)
			len += ft_check(format, &i, arg_n);
		else
			len += ft_putchar(format[i++]);
	}
	va_end(arg_n);
	return (len);
}

/*
int	main(void)
{
	int				len;
	char			c;
	char			*string;
	int				nbr;
	int				ngbr;
	unsigned int 	unit;
	unit = -1;
	len = 0;
	c = 'Y';
	string = "Yes, strings are working 1234";
	nbr = 42;
	ngbr = -2147483647;
	len = ft_printf("characers: %c \n", c);
	printf("%i \n", len);
	len = printf("characers: %c \n", c);
	printf("%i \n", len);
	len = ft_printf("strings: %s \n", string);
	printf("%i \n", len);
	len = printf("strings: %s \n", string);
	printf("%i \n", len);
	len = ft_printf("decimal and integrers: %i \n", nbr);
	printf("%i \n", len);
	len = printf("decimal and integrers: %i \n", nbr);
	printf("%i \n", len);
	len = ft_printf("decimal and integrers: %i \n", ngbr);
	printf("%i \n", len);
	len = printf("decimal and integrers: %i \n", ngbr);
	printf("%i \n", len);
	len = ft_printf("hex: %x \n", nbr);
	printf("%i \n", len);
	len = printf("hex: %x \n", nbr);
	printf("%i \n", len);
	len = ft_printf("pointer: %p \n", string);
	printf("%i \n", len);
	len = printf("pointer: %p \n", string);
	printf("%i \n", len);
	len = ft_printf("percentage %% \n");
	printf("%i \n", len);
	len = printf("percentage %% \n");
	printf("%i \n", len);
	len = ft_printf("unsigned %u \n", unit);
	printf("%i \n", len);
	len = printf("unsigned %u \n", unit);
	printf("%i \n", len);
	len = ft_printf(" %d %d %d %d \n", INT_MAX, INT_MIN, 0, -42);
	printf("%i \n", len);
	len = printf(" %d %d %d %d \n", INT_MAX, INT_MIN, 0, -42);
	printf("%i \n", len);
}
*/