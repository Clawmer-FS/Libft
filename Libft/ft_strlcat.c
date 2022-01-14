/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuzanne <jsuzanne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 17:27:48 by jsuzanne          #+#    #+#             */
/*   Updated: 2022/01/14 13:44:50 by jsuzanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	ret;
	size_t	lendest;
	size_t	lensrc;

	index = 0;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (lendest < size)
		ret = lendest + lensrc;
	else
		ret = size + lensrc;
	if (size == 0)
		return (ret);
	while (src[index] && lendest + index < (size - 1))
	{
		dest[lendest + index] = src[index];
		index++;
	}
	dest[lendest + index] = '\0';
	return (ret);
}
