/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muraasla <muraasla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 11:42:21 by muraasla          #+#    #+#             */
/*   Updated: 2023/07/07 16:23:35 by muraasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mall;
	int		i;

	i = 0;
	mall = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!mall || !s)
		return (NULL);
	while (s[i])
	{
		mall[i] = f(i, s[i]);
		i++;
	}
	mall[i] = '\0';
	return (mall);
}
