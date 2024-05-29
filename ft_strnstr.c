/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:01:36 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/15 16:37:27 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t			i;
	size_t			j;
	unsigned int	to_find_len;

	i = 0;
	if (!str || !to_find)
		return (NULL);
	if (to_find[0] == '\0')
		return ((char *)str);
	to_find_len = ft_strlen(to_find);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < len && to_find[j])
			j++;
		if (j == to_find_len)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	char sa[] = "hello world!";
	char sb[] = "wor";
	printf("%s", ft_strnstr(sa, sb, 4));
	//printf("%s", strnstr(sa, sb));
	return (0);
}*/
