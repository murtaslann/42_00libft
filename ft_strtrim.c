/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muraasla <muraasla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:08:14 by muraasla          #+#    #+#             */
/*   Updated: 2023/07/10 16:24:27 by muraasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char(char c, const char *set)
{
	while (*set != '\0')
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*mall;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s || !set)
		return (NULL);
	while (is_char(*s, set) && *s != '\0')
		s++;
	j = ft_strlen(s);
	while (is_char(s[j - 1], set) && j != 0)
		j--;
	mall = (char *)malloc(sizeof(char) * (j + 1));
	if (!mall)
		return (NULL);
	while (s[i] && i < j)
	{
		mall[i] = s[i];
		i++;
	}
	mall[i] = '\0';
	return (mall);
}
