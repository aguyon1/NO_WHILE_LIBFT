/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 11:20:20 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/10 11:26:41 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	const t_len len = {.s1 = ft_strlen(s1), .s2 = ft_strlen(s2)};
	char *res;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	res = malloc((len.s1 + len.s2 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s1, len.s1 + 1);
	ft_strlcpy(res + len.s1, s2, len.s2 + 1);
	return (res);
}
