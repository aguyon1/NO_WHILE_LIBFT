/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:25:19 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/09 17:46:31 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ctype.h"

char *goto_sign(char *str)
{
	if (*str == ' ' || (*str >= '\t' && *str <= '\v'))
		return (goto_sign(str + 1));
	return (str);
}

int get_res(char *str, int res)
{
	if (isdigit(*str))
		return (get_res(str + 1, res * 10 + *str - '0'));
	else
		return (res);
}

int ft_atoi(const char *nptr)
{
	char *str;
	int		sign;

	str = (char *)nptr;
	sign = 1;
	str = goto_sign(str);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	return (sign * get_res(str, 0));
}

int main(void)
{
	printf("%d\n", ft_atoi("-42"));
}
