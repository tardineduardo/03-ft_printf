/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countput_chr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:41:27 by eduribei          #+#    #+#             */
/*   Updated: 2024/06/01 13:39:12 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countput_chr(va_list args)
{
	int	c;

	c = va_arg(args, int);
	return (ft_putchr_fd_printf(c, 1));
}
