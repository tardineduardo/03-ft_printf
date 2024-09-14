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

int	ft_countput_int(va_list args)
{
	long long int	n;
	int				count;
	int				*ct;

	n = va_arg(args, long long int);
	ct = &count;
	count = 0;
	ft_putnbr_fd_printf(n, 1, ct);
	return (count);
}
