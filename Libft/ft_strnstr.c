/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuzanne <jsuzanne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:07:22 by jsuzanne          #+#    #+#             */
/*   Updated: 2022/01/14 15:50:16 by jsuzanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;

	if (*needle == 0)
		return ((char *) haystack);
	i = 0;
	nlen = ft_strlen(needle);
	while (i < nlen && haystack[i])
	{
		printf("Strin start with: %c\n", haystack[i]);
		if (haystack[i] == needle[0] && len - i >= nlen
			&& ft_strncmp(&haystack[i], needle, nlen) == 0)
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}

int main()
{
	printf("Result is: %s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
}