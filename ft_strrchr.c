/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:05:15 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/25 13:11:41 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	seek;
	char	*str;

	i = ft_strlen(s);
	seek = c;
	str = (char *)s;
	if (!(*str) && c != 0)
		return (NULL);
	while (i > 0 && str[i] != seek)
		i--;
	if (i == 0 && str[i] != seek)
		return (NULL);
	return (&str[i]);
}
