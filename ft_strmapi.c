/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:32:10 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/23 21:15:53 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*applied;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	applied = (char *)malloc(len + 1);
	if (!applied)
		return (NULL);
	while (s[i] != '\0')
	{
		applied[i] = f(i, (char)s[i]);
		i++;
	}
	applied[i] = '\0';
	return (applied);
}
