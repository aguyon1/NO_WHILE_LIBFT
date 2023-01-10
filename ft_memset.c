/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:08:55 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/09 16:28:38 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset_aux(char *char_s, int c, size_t n, size_t i)
{
	if (i == n)
		return (char_s);
	else
	{
		char_s[i] = c;
		return (ft_memset_aux(char_s, c, n, i + 1));
	}

}

void	*ft_memset(void *s, int c, size_t n)
{
	return (ft_memset_aux((char *)s, c, n, 0));
}

