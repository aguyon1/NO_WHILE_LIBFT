/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:51:46 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/09 19:02:00 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi_aux(const char *s, char *res, char (*f)(unsigned int, char), unsigned int i)
{
	if (s[i] == '\0')
	{
		res[i] = '\0';
		return (res);
	}
	res[i] = f(i, s[i]);
	return (ft_strmapi_aux(s, res, f, i + 1));
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*res;

	if (s == NULL || f == NULL)
		return (NULL);
	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	return (ft_strmapi_aux(s, res, f, 0));
}
