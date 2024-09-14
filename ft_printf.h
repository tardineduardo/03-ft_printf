/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 15:42:42 by eduribei          #+#    #+#             */
/*   Updated: 2024/06/02 13:48:11 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *input, ...);
int		ft_putchr_fd_printf(char c, int fd);
int		ft_putstr_fd_printf(char *s, int fd);
void	ft_putnbr_fd_printf(int n, int fd, int *ct);
void	ft_putuns_fd_printf(unsigned int n, int fd, int *ct);
int		ft_countput_chr(va_list args);
int		ft_countput_str(va_list args);
int		ft_countput_int(va_list args);
int		ft_countput_ptr(va_list args);
int		ft_countput_uns(va_list args);
int		ft_countput_hex_l(va_list args);
int		ft_countput_hex_u(va_list args);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
void	ft_error_exit(char *message);

#endif