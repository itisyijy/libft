/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:00:34 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/21 17:21:13 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_abs(int n)
{
	long	result;

	result = n;
	if (result < 0)
		return (result * -1);
	return (result);
}

int	ft_countdigit(int n)
{
	int		len;
	long	tmp;

	len = 1;
	tmp = ft_abs(n);
	while (tmp / 10 > 0)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	long	tmp;
	char	*array;

	len = ft_countdigit(n);
	if (n < 0)
		len++;
	tmp = ft_abs(n);
	array = (char *)malloc(len + 1);
	if (!array)
		return (NULL);
	array[len--] = '\0';
	if (n == 0)
		array[len] = '0';
	while (tmp > 0)
	{
		array[len--] = tmp % 10 + '0';
		tmp = tmp / 10;
	}
	if (n < 0)
		array[0] = '-';
	return (array);
}
