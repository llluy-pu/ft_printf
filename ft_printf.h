/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 20:09:23 by llluy-pu          #+#    #+#             */
/*   Updated: 2023/03/06 15:06:46 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <stdbool.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);

/**
 * @brief
 *
 * @param nbr int a convertir
 * @param base base de conversion
 * @return int conversion a la base base
 */
int		ft_check(const char *s, int *i, va_list arg_n);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_nbrlen(long long int n, int base);
int		ft_putnbr(long long int n);
int		ft_puthex(unsigned int n, int upper);
int		ft_ptrlen(unsigned long long n);
int		ft_putptr(unsigned long long n, int on);
int		ft_revprint(char *hexa);
int		ft_hextoprt(unsigned long addr);
int		ft_prthex(void *ptr_addr);
int		ft_prt_len(size_t num);
void	ft_put_ptr(size_t num);
int		ft_print_ptr(unsigned long long ptr);
#endif