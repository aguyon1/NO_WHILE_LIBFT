/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:42:58 by aguyon            #+#    #+#             */
/*   Updated: 2022/11/15 18:07:20 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*memory_bloc;
	size_t			total;

	memory_bloc = NULL;
	total = nmemb * size;
	if (total == 0 || nmemb <= SIZE_MAX / size)
		memory_bloc = malloc(total);
	if (!memory_bloc)
		return (NULL);
	ft_bzero(memory_bloc, total);
	return (memory_bloc);
}
