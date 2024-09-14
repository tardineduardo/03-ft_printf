/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countput_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 16:47:05 by eduribei          #+#    #+#             */
/*   Updated: 2024/05/31 19:49:43 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_put_hex(unsigned long long int n, int *ct)
{
	char	c;

	if (n >= 16)
		ft_put_hex(n / 16, ct);
	c = "0123456789abcdef"[(n % 16)];
	ft_putchr_fd_printf(c, 1);
	(*ct)++;
}

int	ft_countput_ptr(va_list args)
{
	unsigned long long int	n;
	int						count;
	int						*ct;

	n = va_arg(args, unsigned long long int);
	ct = &count;
	count = 0;
	if (n == 0)
		return (ft_putstr_fd_printf("(nil)", 1));
	else
	{
		ft_putstr_fd_printf("0x", 1);
		ft_put_hex(n, ct);
		return (2 + count);
	}
}
