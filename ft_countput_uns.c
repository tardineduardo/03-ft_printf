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

int	ft_countput_uns(va_list args)
{
	unsigned long long	n;
	int					count;
	int					*ct;

	n = va_arg(args, unsigned long long);
	ct = &count;
	count = 0;
	ft_putuns_fd_printf(n, 1, ct);
	return (count);
}
