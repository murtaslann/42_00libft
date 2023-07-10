/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muraasla <muraasla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:35:43 by muraasla          #+#    #+#             */
/*   Updated: 2023/07/07 14:59:07 by muraasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word(char const *s, char c)
{
	int		i;
	int		word;

	word = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && i == 0)
		{
			i = 1;
			word++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (word);
}

static char	*ft_new(char *s, char c)
{
	char	*mall;
	int		i;
	int		llen;

	i = 0;
	llen = 0;
	while (s[llen] && s[llen] != c)
		llen++;
	mall = (char *)malloc(sizeof(char) * (llen + 1));
	if (!mall)
		return (NULL);
	while (*s && *s != c)
	{
		mall[i] = *s;
		i++;
		s++;
	}
	mall[i] = '\0';
	return (mall);
}

char	**ft_split(char const *s, char c)
{
	char	**mall;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	mall = (char **)malloc(sizeof(char *) * (ft_word(s, c) + 1));
	if (!mall || !s)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			mall[j++] = ft_new((char *)s, c);
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	mall[j] = NULL;
	return (mall);
}
