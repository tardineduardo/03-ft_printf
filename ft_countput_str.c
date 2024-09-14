/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countput_str.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:35:14 by eduribei          #+#    #+#             */
/*   Updated: 2024/05/31 19:49:57 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countput_str(va_list args)
{
	char	*s;

	s = va_arg(args, char *);
	if (!s)
	{
		return (ft_putstr_fd_printf("(null)", 1));
	}
	return (ft_putstr_fd_printf(s, 1));
}
