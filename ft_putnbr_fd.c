/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muraasla <muraasla@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:12:42 by muraasla          #+#    #+#             */
/*   Updated: 2023/07/05 19:21:35 by muraasla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s[10];
	int		i;
	long	nbr;

	nbr = n;
	i = 0;
	if (nbr == 0)
		write(fd, "0", 1);
	if (nbr < 0)
	{
		nbr *= -1;
		write(fd, "-", 1);
	}
	while (nbr)
	{
		s[i++] = nbr % 10 + '0';
		nbr /= 10;
	}
	while (i--)
		write(fd, s + i, 1);
}
