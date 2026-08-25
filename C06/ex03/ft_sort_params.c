/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/21 00:05:52 by sebsilve          #+#    #+#             */
/*   Updated: 2026/08/21 00:23:35 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_smaller(char *str, char *str2)
{
	int	i;

	i = 0;
	while (str[i] && str2[i] && str[i] == str2[i])
		i++;
	if (str[i] > str2[i])
		return (1);
	return (0);
}
char	**ft_sort(int c, char **tab)
{
	int	i;
	int	j;
	char	*temp;

	i = 1;
	while (i < c - 1)
	{
		j = i + 1;
		while (j < c)
		{
			if (ft_smaller(tab[i], tab[j]))
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	main(int c, char **tab)
{
	int	i;
	int	j;
	
	i = 0;
	j = 1;
	tab = ft_sort(c, tab);
	while (j < c){
		while (tab[j][i])
		{
			write(1, &tab[j][i], 1);
			i++;
		}
		i = 0;
		j++;
		write(1, "\n", 1);
}
	return (0);
}