/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:18:55 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/21 21:43:24 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i_d;
	size_t	i_s;
	size_t	cat;

	if (!dst && !dstsize)
		return (ft_strlen(src));
	i_d = 0;
	while (((unsigned char *)dst)[i_d] != '\0')
		i_d++;
	i_s = 0;
	while (((unsigned char *)src)[i_s] != '\0')
		i_s++;
	if (i_d >= dstsize)
		return (i_s + dstsize);
	cat = 0;
	while (cat + i_d + 1 < dstsize && src[cat] != '\0')
	{
		((unsigned char *)dst)[i_d + cat] = ((unsigned char *)src)[cat];
		cat++;
	}
	((unsigned char *)dst)[i_d + cat] = '\0';
	return (i_d + i_s);
}
