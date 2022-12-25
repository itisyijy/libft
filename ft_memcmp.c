/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:33:54 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/21 20:57:04 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 1;
	if (n == 0)
		return (0);
	while (*((unsigned char *)s1) == *((unsigned char *)s2) && i < n)
	{
		s1++;
		s2++;
		i++;
	}
	return (*((unsigned char *)s1) - *((unsigned char *)s2));
}
