/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:15:00 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/10 19:02:37 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	unsigned char	*char_s1;
// 	unsigned char	*char_s2;
// 	size_t			i;

// 	char_s1 = (unsigned char *)s1;
// 	char_s2 = (unsigned char *)s2;
// 	i = 0;
// 	while (i < n)
// 	{
// 		if (char_s1[i] != char_s2[i])
// 			return (char_s1[i] - char_s2[i]);
// 		i++;
// 	}
// 	return (0);
// }

int ft_memcmp_aux(unsigned char *s1, unsigned char *s2, size_t n, size_t i)
{
	if (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			return (ft_memcmp_aux(s1, s2, n, i + 1));
	}
	return (0);
}

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return (ft_memcmp_aux((unsigned char *)s1, (unsigned char *)s2, n, 0));
}

int main(void)
{
	char *s1 = "abc";
	char *s2 = "bcd";

	printf("%d\n", ft_memcmp((const void *)s1, (const void *)s2, 3));
}
