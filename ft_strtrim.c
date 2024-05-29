/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:04:22 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/15 14:58:51 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strtrim_aux(const char *s1, size_t start, size_t len)
{
	size_t	i;
	char	*new_str;

	i = 0;
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	while (i < len)
	{
		new_str[i] = s1[start + i];
		i++;
	}
	new_str[len] = '\0';
	return (new_str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t		len;
	size_t		start;
	size_t		end;
	const char	*s;

	len = ft_strlen(s1);
	start = 0;
	end = len - 1;
	s = "";
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr((char *)set, s1[start]))
		start++;
	if (start == len)
		return (ft_strdup(s));
	while (ft_strchr((char *)set, s1[end]))
		end--;
	return (ft_strtrim_aux(s1, start, end - start + 1));
}
/*
int main() {
	char *s1 = "ab abc";
	char *set = "cbaa";
	printf("%s \n", s1);
	char *trimmed = ft_strtrim(s1, set);
	printf("%s", trimmed);
	free(trimmed);
	return 0;
}*/
