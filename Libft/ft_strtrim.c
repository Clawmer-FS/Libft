/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuzanne <jsuzanne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 15:11:43 by jsuzanne          #+#    #+#             */
/*   Updated: 2022/01/13 11:13:25 by jsuzanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	to_cut(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	//Move in 1 while the char is in set, save position
	//Move to end and compare back to front the chars, save position
	//Malloc (size * len - start - end + 1)
	//copy 1 in new point from start to end add \0

	int	start;
	int	end;
	char *res;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && to_cut(s1[start], *set))
		start++;
	while (s1[end] && to_cut(s1[end], *set))
		end--;
}