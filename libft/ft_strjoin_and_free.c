/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduribei <eduribei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:49:43 by eduribei          #+#    #+#             */
/*   Updated: 2024/05/20 15:37:46 by eduribei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strjoin1(char const *s1, char const *s2)
// {
// 	size_t	ns_len;
// 	size_t	s1_len;
// 	size_t	s2_len;
// 	char	*newstring;

// 	s1_len = ft_strlen((char *)s1);
// 	s2_len = ft_strlen((char *)s2);
// 	ns_len = s1_len + s2_len;
// 	newstring = ft_calloc((ns_len + 1), sizeof(char));
// 	if (newstring == (NULL))
// 		return (NULL);
// 	ft_memcpy((void *)newstring, (char *)s1, s1_len);
// 	ft_memcpy((void *)&newstring[s1_len], (char *)s2, s2_len);
// 	return (newstring);
// }

// #include "libft.h"
char	*ft_strjoin_and_free(char const *s1, char const *s2)
{
	size_t	ns_len;
	size_t	s1_len;
	size_t	s2_len;
	char	*newstring;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL && s2 != NULL)
		return (ft_strdup(s2));
	else if (s1 != NULL && s2 == NULL)
		return (ft_strdup(s1));
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	ns_len = s1_len + s2_len;
	newstring = calloc((ns_len + 1), sizeof(char));
	if (newstring == (NULL))
		return (NULL);
	ft_memcpy((void *)newstring, (char *)s1, s1_len);
	ft_memcpy((void *)&newstring[s1_len], (char *)s2, s2_len);
	free((void *)s1);
	return (newstring);
}
