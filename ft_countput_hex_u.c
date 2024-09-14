/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countput_HEX.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:47:05 by eduribei          #+#    #+#             */
/*   Updated: 2024/06/01 16:57:30 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_hex_u(unsigned int n, int *ct)
{
	char	c;

	if (n >= 16)
		ft_put_hex_u(n / 16, ct);
	c = "0123456789ABCDEF"[(n % 16)];
	ft_putchr_fd_printf(c, 1);
	(*ct)++;
}

int	ft_countput_hex_u(va_list args)
{
	unsigned int	n;
	int				count;
	int				*ct;

	n = va_arg(args, unsigned int);
	ct = &count;
	count = 0;
	if (n == 0)
		return (ft_putstr_fd_printf("0", 1));
	else
		ft_put_hex_u(n, ct);
	return (count);
}
