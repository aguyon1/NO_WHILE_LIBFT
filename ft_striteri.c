/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:02:24 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/09 19:04:53 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri_aux(char *s, void (*f)(unsigned int, char*), size_t i)
{
	if (s[i] == '\0')
		return;
	f(i, &s[i]);
	ft_striteri_aux(s, f, i + 1);
}

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	ft_striteri_aux(s, f, 0);
}
