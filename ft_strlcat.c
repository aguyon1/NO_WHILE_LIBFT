/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:40:23 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/10 19:00:00 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat_aux(char *dst, const char *src, size_t size, size_t i)
{

	if (src[i] && (len.dst + i) < (size - 1))
	{

	}
	dst[len.dst + i] = '\0';
	return (len.dst + len.src);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const size_t len_dst = ft_strlen(dst);
	const size_t len_src = ft_strlen(src);

	if (size <= len_dst)
		return (len_src + size);
	return (ft_strlcat_aux(dst, src, size, 0));
}
