/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:57:40 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/25 11:42:33 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	result;

	result = (unsigned char)c;
	if (result >= 'A' && result <= 'Z')
	{
		result = result - 'A' + 'a';
		return ((int)result);
	}
	return (c);
}
