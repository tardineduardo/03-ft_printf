/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:46:47 by eduribei          #+#    #+#             */
/*   Updated: 2024/06/02 13:47:52 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_none(char c)
{
	write(1, "%", 1);
	write(1, &c, 1);
	return (2);
}

static int	ft_put_percent(void)
{
	write(1, "%", 1);
	return (1);
}

static int	ft_handle_last(char last, int count)
{
	if (last == '%')
	{
		count = -1;
		return (count);
	}
	else if (last == '\0')
	{
		return (count);
	}
	else
	{
		ft_putchr_fd_printf(last, 1);
		return (++count);
	}
}

static int	ft_check_type(char c, va_list args)
{
	if (c == '%')
		return (ft_put_percent());
	else if (c == 'c')
		return (ft_countput_chr(args));
	else if (c == 's')
		return (ft_countput_str(args));
	else if (c == 'p')
		return (ft_countput_ptr(args));
	else if (c == 'd' || c == 'i')
		return (ft_countput_int(args));
	else if (c == 'u')
		return (ft_countput_uns(args));
	else if (c == 'x')
		return (ft_countput_hex_l(args));
	else if (c == 'X')
		return (ft_countput_hex_u(args));
	else
		return (ft_none(c));
}

int	ft_printf(const char *input, ...)
{
	int		count;
	int		len;
	int		a;
	va_list	args;

	if (!input)
		return (-1);
	va_start(args, input);
	len = ft_strlen(input);
	count = 0;
	a = 0;
	while (a < len - 1)
	{
		if (input[a] == '%')
			count += ft_check_type(input[++a], args);
		else
			count += ft_putchr_fd_printf(input[a], 1);
		a++;
	}
	va_end(args);
	return (ft_handle_last(input[a], count));
}
