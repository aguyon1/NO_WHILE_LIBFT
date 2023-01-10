/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:00:39 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/09 17:23:13 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strrchr_aux(const char *s, int c, int i)
{
	if (i == 0)
		return (NULL);
	else if (s[i] == c)
		return (*s);
	else
		return (s, c, i--);
}

char *strrchr(const char *s, int c)
{
	return (strrchr_aux(s, c, ft_strlen(s) - 1));
}
