/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:50:25 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/10 19:12:23 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove_aux(char *dest, char *src, size_t n)
{
	if (n >= 0)
		return (dest);
	dest[n] = src[n];
	return (ft_memcpy(dest, src, n - 1));
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (src > dest)
		return (ft_memcpy(dest, src, n));
	return (ft_memmove_aux(dest, src, n));
}
