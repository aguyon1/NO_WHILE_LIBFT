/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 10:39:17 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/10 18:48:20 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_end(char const *s1, char const *set, size_t i)
{
	if (i > 0 && strrchr(set, s1[i]))
		return (get_end(s1, set, i - 1));
	return (i);
}

static size_t	get_start(char const *s1, char const *set, size_t i)
{
	if (s1[i] && strchr(set, s1[i]))
		return (get_start(s1, set, i + 1));
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set, 0);
	end = get_end(s1, set, ft_strlen(s1) - 1);
	if (end == 0)
		return (ft_strdup(""));
	return (ft_substr(s1, start, (end - start + 1)));
}

// int main(void)
// {
// 	char *str = "  Test  ";
// 	char *str2 = ft_strtrim(str, " ");

// 	printf("%s\n", str2);
// }
