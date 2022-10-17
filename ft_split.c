/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hahadiou <hahadiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:59:22 by hahadiou          #+#    #+#             */
/*   Updated: 2022/10/11 22:43:49 by hahadiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		word_len;
	int		i;

	if (!s)
		return (0);
	strs = (char **)malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (!strs)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c)
			++s;
		if (*s)
		{
			word_len = ft_strchr(s, c) - s;
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			strs[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	strs[i] = 0;
	return (strs);
}
