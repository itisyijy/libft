/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:03:28 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/25 14:20:56 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	ini;
	size_t	end;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	ini = 0;
	while (s1[ini] != '\0' && ft_strchr(set, s1[ini]))
		ini++;
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_calloc(1, 1));
	while (end - 1 >= ini && ft_strrchr(set, s1[end - 1]))
		end--;
	trimmed = (char *)malloc(end - ini + 1);
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, &s1[ini], end - ini + 1);
	return (trimmed);
}
