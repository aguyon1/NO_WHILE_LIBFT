/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:58:29 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/09 17:00:17 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strchr(const char *s, int c)
{
	if (*s == '\0')
		return (NULL);
	else if (*s == c)
		return (s);
	else
		return (strchr(s + 1, c));
}