/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 23:55:21 by sebsilve          #+#    #+#             */
/*   Updated: 2026/08/12 20:51:38 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	number;
	char	c;

	number = nb;
	if (number < 0)
	{
		write(1, "-", 1);
		number = -number;
	}
	if (number >= 10)
		ft_putnbr(number/10);
	c = (number % 10) + '0';
	write(1, &c, 1);
}