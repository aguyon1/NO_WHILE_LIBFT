/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguyon <aguyon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:41:35 by aguyon            #+#    #+#             */
/*   Updated: 2023/01/10 18:47:57 by aguyon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_nb_words(char const *s, char sep)
{
	const t_bool	is_sep_a = (*s == sep);
	const t_bool	is_sep_b = (*(s + 1) == sep);

	if (*s)
	{
		if (!is_sep_a && is_sep_b)
			return (get_nb_words(s + 1, sep) + 1);
		else
			return (get_nb_words(s + 1, sep));
	}
	return (0);
}

size_t	get_len_word(char *s, char sep, size_t *i, t_bool find_word)
{
	const t_bool	is_sep = (s[*i] == sep);

	if (is_sep && !find_word)
	{
		*i = *i + 1;
		return (get_len_word(s, sep, i, false));
	}
	if (is_sep && find_word)
		return (0);
	*i = *i + 1;
	return (get_len_word(s, sep, i, true) + 1);
}

void	*free_all(char **strs, size_t i)
{
	if (i == 0)
	{
		free(strs[i]);
		return (NULL);
	}
	else
	{
		free(strs[i]);
		free_all(strs, i - 1);
	}
	return (NULL);
}

char	**ft_split_aux(char **strs, char *s, t_split v, size_t *i)
{
	const size_t	len_word = get_len_word(s, v.sep, i, false);

	if (v.j == v.nb_words)
	{
		strs[v.j] = NULL;
		return (strs);
	}
	strs[v.j] = ft_substr(s, *i - len_word, len_word);
	if (strs[v.j] == NULL)
		return (free_all(strs, v.j));
	v.j = v.j + 1;
	return (ft_split_aux(strs, s, v, i));
}

char	**ft_split(char const *s, char c)
{
	char			**strs;
	t_split			vars;
	size_t			i;

	if (s == NULL)
		return (NULL);
	vars.sep = c;
	vars.nb_words = get_nb_words(s, c);
	vars.j = 0;
	i = 0;
	strs = malloc((vars.nb_words + 1) * sizeof(char *));
	if (strs == NULL)
		return (NULL);
	return (ft_split_aux(strs, (char *)s, vars, &i));
}

// int main(void)
// {
// 	char **strs = ft_split("  Test de merde ", ' ');

// 	for (int i = 0; i < 3; i++)
// 		printf("%s\n", strs[i]);
// }
