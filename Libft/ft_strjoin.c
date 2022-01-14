/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuzanne <jsuzanne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:03:07 by jsuzanne          #+#    #+#             */
/*   Updated: 2022/01/14 12:00:32 by jsuzanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		j;
	int		s1len;
	int		s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!res)
		return (0);
	i = 0;
	while (i < s1len)
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2len)
	{
		res[i + j] = s2[j];
		j++;
	}
	res [i + j] = '\0';
	return (res);
}
