/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeongyle <jeongyle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:21:41 by jeongyle          #+#    #+#             */
/*   Updated: 2022/12/25 16:49:29 by jeongyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char *s, char c)
{
	size_t	i;
	size_t	flag;
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	i = 0;
	flag = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

size_t	ft_wordlen(char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

char	*ft_wordfind(char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
			return (s);
		s++;
	}
	return (s);
}

char	*ft_wordassign(char *dst, char *src, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src + i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		wordcount;
	char	**list;

	wordcount = ft_wordcount((char *)s, c);
	list = (char **)ft_calloc((wordcount + 1), sizeof(char *));
	if (!list)
		return (NULL);
	i = 0;
	while (i < wordcount)
	{
		s = ft_wordfind((char *)s, c);
		list[i] = (char *)malloc(ft_wordlen((char *)s, c) + 1);
		if (!list[i])
		{
			while (--i >= 0)
				free(list[i]);
			free(list);
			return (NULL);
		}
		s = ft_wordassign(list[i], (char *)s, ft_wordlen((char *)s, c));
		i++;
	}
	return (list);
}
