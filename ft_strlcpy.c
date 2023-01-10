/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:56:00 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/09 19:40:03 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_strlcpy_aux(char *dest, const char *src, size_t n, size_t i)
{
	if (src[i] && i < n)
	{
		dest[i] = src[i];
		ft_strlcpy_aux(dest, src, n, i + 1);
	}
}

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	ft_strlcpy_aux(dest, src, n, 0);
	return (ft_strlen(src));
}

// size_t strlcpy(char *dest, const char *src, size_t n)
// {
// 	size_t	len_src;
// 	size_t	i;

// 	len_src = ft_strlen(src);
// 	if (n == 0)
// 		return (len_src);
// 	i = 0;
// 	while (i < (n - 1) && src[i])
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (len_src);
// }

// #include <stdio.h>

// int main(void)
// {
// 	char src[] = "Test";
// 	char dest[5];

// 	printf("%ld", ft_strlcpy(dest, src, 5));
// 	printf("%s\n", dest);
// }
