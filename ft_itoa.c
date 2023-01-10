/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:56:01 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/09 18:53:30 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t len_of_int(long n, size_t i)
{
	if (n == 0 && i == 0)
		return (1);
	if (n == 0)
		return (0);
	if (n < 0)
		return (len_of_int(-n, i + 1) + 1);
	else
		return (len_of_int(n / 10, i + 1) + 1);
}

char *ft_itoa_aux(char *str, long n, size_t i)
{
	if (i == 0)
	{
		str[i] = n % 10 + '0';
		return (str);
	}
	else
	{
		str[i] = n % 10 + '0';
		return (ft_itoa_aux(str, n / 10, i - 1));
	}
}

char *ft_itoa(int n)
{
	char *res;
	const size_t len = len_of_int((long)n, 0);

	res = malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	return (ft_itoa_aux(res, (long)n, len - 1));
}

int main(void)
{
	char *res = ft_itoa(42);
	printf("%s\n", res);
}
