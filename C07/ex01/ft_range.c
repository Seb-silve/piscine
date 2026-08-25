/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 10:57:53 by sebsilve          #+#    #+#             */
/*   Updated: 2026/08/21 11:05:03 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	if (min >= max)
		return NULL;

	range = malloc(sizeof(int) * (max - min));
	i = 0;
	if (range == NULL)
	{
		free(range);
		return NULL;
	}
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}