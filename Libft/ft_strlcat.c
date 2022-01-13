/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuzanne <jsuzanne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:27:48 by jsuzanne          #+#    #+#             */
/*   Updated: 2022/01/11 11:27:04 by jsuzanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	index;
	unsigned int	aux;
	unsigned long	lendest;
	unsigned long	lensrc;

	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	aux = lendest;
	index = 0;
	if (size != 0)
	{
		while (src[index] != '\0' && aux < (size - 1))
		{
			dest[aux] = src[index];
			index++;
			aux++;
		}
		dest[aux] = '\0';
	}
	return (lendest + lensrc);
}
