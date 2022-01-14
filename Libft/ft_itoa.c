/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuzanne <jsuzanne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 14:51:40 by jsuzanne          #+#    #+#             */
/*   Updated: 2022/01/13 17:34:45 by jsuzanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static void	setnum(char *res, int n, int len)
{
	int	i;
	int	neg;

	i = 0;
	neg = 0;
	if (n < 0)
	{
		n = -n;
		neg++;
	}
	while (i < len)
	{
		res[len - 1 - i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	if (neg)
		res[0] = '-';
	res[i] = '\0';
}

static int	numlen(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 10)
	{
		n = n / 10;
		count++;
	}
	count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == -2147483648)
	{
		res = malloc(sizeof(char) * (12));
		res = "-2147483648";
		return (res);
	}
	len = numlen(n);
	res = malloc(sizeof(char) * (len + 1));
	setnum(res, n, len);
	return (res);
}
