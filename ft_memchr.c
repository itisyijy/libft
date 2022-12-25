/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:18:43 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/21 20:13:12 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	seek;

	i = 0;
	seek = c;
	while (i < n && ((unsigned char *)s)[i] != seek)
		i++;
	if (i == n)
		return (NULL);
	return ((void *)&s[i]);
}
