/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:51:03 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/10 13:24:14 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (*s)
	{
		ft_putchar_fd(*s, fd);
		ft_putstr_fd(s + 1, fd);
	}
}

int main(void)
{
	ft_putstr_fd("Test", 1);
}
