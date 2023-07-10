/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muraasla <muraasla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 13:44:33 by muraasla          #+#    #+#             */
/*   Updated: 2023/07/05 16:00:31 by muraasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	b;
	void	*p;

	if (count == 0 || size == 0)
		return (malloc(0));
	b = count * size;
	if (b / count != size)
		return (NULL);
	p = malloc(b);
	if (!p)
		return (NULL);
	else
		ft_bzero(p, b);
	return (p);
}
