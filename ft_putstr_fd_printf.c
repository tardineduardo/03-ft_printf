/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd_printf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:17:20 by eduribei          #+#    #+#             */
/*   Updated: 2024/05/31 19:47:10 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd_printf(char *s, int fd)
{
	int	strcount;

	strcount = 0;
	while (*s != '\0')
	{
		write(fd, s, 1);
		strcount++;
		s++;
	}
	return (strcount);
}
