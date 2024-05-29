/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:35:33 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/15 18:40:01 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int	count_substrings(const char *str, char c)
{
	int	count;
	int	start;

	count = 0;
	start = 0;
	while (*str)
	{
		if (*str == c)
			start = 0;
		if (start == 0 && *str != c)
		{
			start = 1;
			count++;
		}
		str++;
	}
	return (count);
}

static char	**ft_alloc_array(const char *str, char c)
{
	char	**result;

	if (!str)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (count_substrings(str, c) + 1));
	if (!result)
		return (NULL);
	return (result);
}

static size_t	ft_aloc_str(char **result, const char *str, int j, int len)
{
	result[j] = (char *)malloc(len + 1);
	if (!result[j])
	{
		while (j > 0)
			free(result[--j]);
		free(result);
		return (0);
	}
	ft_strncpy(result[j], str, len);
	result[j][len] = '\0';
	return (j + 1);
}

char	**ft_split(const char *str, char c)
{
	char	**result;
	int		start;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = ft_alloc_array(str, c);
	if (!result)
		return (NULL);
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			start = i;
			while (str[i] && str[i] != c)
				i++;
			j = ft_aloc_str(result, str + start, j, i - start);
		}
	}
	result[j] = NULL;
	return (result);
}
/*
int	main()
{
	const char *str = "/asd/";
	char **result = ft_split(str,'/');
	int j = 0;
	return 0;
}*/
