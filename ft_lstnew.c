/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muraasla <muraasla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:12:38 by muraasla          #+#    #+#             */
/*   Updated: 2023/07/08 15:00:20 by muraasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mall;

	mall = (t_list *)malloc(sizeof(t_list));
	if (!mall)
		return (NULL);
	mall -> content = (void *)content;
	mall -> next = NULL;
	return (mall);
}
