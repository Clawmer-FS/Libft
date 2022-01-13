/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuzanne <jsuzanne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:32:08 by jsuzanne          #+#    #+#             */
/*   Updated: 2022/01/11 12:32:10 by jsuzanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*h;
	char	*n;

	h = str;
	n = to_find;
	if (*to_find == '\0')
		return (str);
	while (*h != '\0')
	{
		if (*h == *n)
			n++;
		if (*n == '\0')
			return ((char *)(h - (n - to_find - 1)));
		h++;
	}
	return (0);
}
