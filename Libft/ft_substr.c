/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuzanne <jsuzanne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 14:12:31 by jsuzanne          #+#    #+#             */
/*   Updated: 2022/01/11 15:23:36 by jsuzanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		slen;
	char	*res;
	size_t	i;

	slen = ft_strlen(s);
	if (!s)
		return (0);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (0);
	i = 0;
	while (i < len && start < slen)
	{
		res[i] = s[start + 1];
		i++;
	}
	res[i] = '\0';
	return (res);
}
