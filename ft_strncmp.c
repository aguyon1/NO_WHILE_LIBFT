/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:06:13 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/10 19:10:32 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int ft_strncmp_aux(unsigned char *s1, unsigned char *s2, size_t n, size_t i)
{
	if (s1[i] == s2[i] && i < n)
		ft_strncmp_aux(s1, s2, n, i + 1);
	return (s1[i] - s2[i]);

}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	return (ft_strncmp_aux((unsigned char *)s1, (unsigned char *)s2, n, 0));
}

// int main(void)
// {
// 	printf("%d\n", ft_strncmp("a", "b", 1));
// }
