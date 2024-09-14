/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_printf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:17:48 by eduribei          #+#    #+#             */
/*   Updated: 2024/06/01 13:16:21 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_get_digits(char *number, unsigned int abs_n, int n)
{
	int	a;

	a = 0;
	while (abs_n >= 1)
	{
		number[a] = (abs_n % 10) + 48;
		abs_n = abs_n / 10;
		a++;
	}
	if (n < 0)
		number[a] = '-';
}

static void	ft_putzero(int *ct)
{
	write(1, "0", 1);
	(*ct)++;
}

void	ft_putnbr_fd_printf(int n, int fd, int *ct)
{
	int				print_len;
	char			number[12];
	unsigned int	abs_n;

	ft_bzero(number, 12);
	if (n == 0)
	{
		ft_putzero(ct);
		return ;
	}
	else if (n < 0)
		abs_n = (unsigned int)(-n);
	else
		abs_n = n;
	ft_get_digits(number, abs_n, n);
	print_len = ft_strlen(number) - 1;
	while (print_len >= 0)
	{
		write(fd, &number[print_len], 1);
		(*ct)++;
		print_len--;
	}
}
