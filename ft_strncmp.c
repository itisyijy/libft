/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:12:01 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/21 21:08:10 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*u1;
	unsigned char	*u2;

	u1 = (unsigned char *)s1;
	u2 = (unsigned char *)s2;
	i = 1;
	if (n == 0)
		return (0);
	while (*u1 != '\0' && *u2 != '\0' && *u1 == *u2 && i < n)
	{
		u1++;
		u2++;
		i++;
	}
	return (*u1 - *u2);
}
