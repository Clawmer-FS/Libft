/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsuzanne <jsuzanne@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:22:41 by jsuzanne          #+#    #+#             */
/*   Updated: 2022/01/11 14:05:52 by jsuzanne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	negative;
	int	number;

	negative = 0;
	number = 0;
	while (*str == ' ' || *str == '\f'
		|| *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number = number * 10;
		number = number + (*str - '0');
		str++;
	}
	if (negative == 1)
		return (-number);
	else
		return (number);
}
