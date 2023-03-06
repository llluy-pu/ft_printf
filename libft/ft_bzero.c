/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llluy-pu <llluy-pu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 17:23:11 by llluy-pu          #+#    #+#             */
/*   Updated: 2022/10/24 20:51:51 by llluy-pu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// All bzero() does is memset everything to zero

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, '\0', n);
}
