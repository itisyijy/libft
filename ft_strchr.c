/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 22:00:10 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/22 13:52:05 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	seek;

	i = 0;
	seek = (char)c;
	if (*s == '\0' && c != '\0')
		return (NULL);
	while (s[i] != '\0' && s[i] != seek)
		i++;
	if (s[i] == '\0' && s[i] != seek)
		return (NULL);
	return ((char *)&s[i]);
}
