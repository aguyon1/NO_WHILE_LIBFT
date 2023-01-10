/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:29:19 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/09 16:40:02 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_aux(unsigned char *char_dest, unsigned char *char_src, size_t n, size_t i)
{
	if (i == n)
		return (char_dest);
	char_dest[i] = char_src[i];
	return (ft_memcpy_aux(char_src, char_dest, n, i + 1));
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!src && !dest)
		return (NULL);
	return (ft_memcpy_aux((unsigned char *)dest, (unsigned char *)src, n, 0));
}
