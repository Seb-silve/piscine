/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sebsilve <seb.silves@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/11 23:34:48 by sebsilve          #+#    #+#             */
/*   Updated: 2026/08/11 23:47:21 by sebsilve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(*str)
	{
		i++;
		str++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;

	if (size <= dest_len)
		return (size + src_len);

	while (src[i] && dest_len + i < size - 1)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';

	return (dest_len + src_len);
}