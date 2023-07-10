/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muraasla <muraasla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:14:39 by muraasla          #+#    #+#             */
/*   Updated: 2023/07/04 18:15:15 by muraasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	int		i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	j = ft_strlen(needle);
	while (*haystack != '\0' && n-- >= j)
	{
		i = 0;
		while (needle[i] == haystack[i])
		{
			i++;
			if (needle[i] == '\0')
				return ((char *)(haystack));
		}
		haystack++;
	}
	return (NULL);
}
