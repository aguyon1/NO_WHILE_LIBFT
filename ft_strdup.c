/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:59:29 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/10 13:19:44 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*copy_s;
	const size_t	len_s = ft_strlen(s);

	copy_s = malloc((len_s + 1) * sizeof(char));
	if (copy_s == NULL)
		return (NULL);
	ft_strlcpy(copy_s, s, len_s + 1);
	return (copy_s);
}

