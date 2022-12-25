/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:50:55 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/25 11:42:14 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char	result;

	result = (unsigned char)c;
	if (result >= 'a' && result <= 'z')
	{
		result = result - 'a' + 'A';
		return ((int) result);
	}
	return (c);
}
