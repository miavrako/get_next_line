/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_Line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miavrako <miavrako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 15:19:20 by miavrako          #+#    #+#             */
/*   Updated: 2026/02/24 22:09:50 by miavrako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*d;

	d = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			d = (char *)s;
		s++;
	}
	if (*s == (char)c)
		d = (char *)s;
	return (d);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_substr(char const	*s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	j = 0;
	while (s[j])
		j++;
	if (j < (size_t) start)
		len = 0;
	if (len > j - start)
		len = j - start;
	result = malloc((sizeof(char)) * len + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i++] = s[start++];
	}
	result[i] = '\0';
	return (result);
}

