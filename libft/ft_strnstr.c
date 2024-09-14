/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:02:27 by eduribei          #+#    #+#             */
/*   Updated: 2024/05/22 22:01:04 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	if (*little == '\0')
		return ((char *)big);
	little_len = ft_strlen(little);
	while (*big && len >= little_len)
	{
		i = 0;
		while (big[i] == little[i])
		{
			if (little[i + 1] == '\0')
				return ((char *)big);
			i ++;
		}
		big ++;
		len --;
	}
	return (NULL);
}

// #include <bsd/string.h>
// #include <stdio.h>
// int main(void)
// {
// char *a = "riodejaneiro";
// char *b = "janei";
// char *test1a = strnstr(b, a, 4);
// printf("strnstr() = %s", test1a);
// char *test1b = strnstr(b, a, 4);
// printf("\n");
// printf("ft_strnstr = %s", test1b);
// printf("\n");
// }