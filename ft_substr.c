/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:44:44 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/25 14:50:25 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (ft_strlen(&s[start]) <= len)
		len = ft_strlen(&s[start]);
	sub = (char *)ft_calloc(len + 1, sizeof(char));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
