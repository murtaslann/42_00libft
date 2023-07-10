/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muraasla <muraasla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:45:28 by muraasla          #+#    #+#             */
/*   Updated: 2023/07/05 15:54:12 by muraasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*mall;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= len)
		len = ft_strlen(s);
	mall = (char *)malloc(sizeof(char) * (len + 1));
	if (!mall)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			mall[j] = s[i];
			j++;
		}
		i++;
	}
	mall[j] = '\0';
	return (mall);
}
