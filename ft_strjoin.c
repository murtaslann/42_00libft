/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muraasla <muraasla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:40:58 by muraasla          #+#    #+#             */
/*   Updated: 2023/07/07 16:30:53 by muraasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mall;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	mall = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!mall)
		return (NULL);
	while (s1[i])
	{
		mall[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		mall[i] = s2[j];
		j++;
		i++;
	}
	mall[i] = '\0';
	return (mall);
}
