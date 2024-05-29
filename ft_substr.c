/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:02:41 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/15 17:01:25 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_special_cases(const char *str, unsigned int *start, size_t *len)
{
	if (!str)
		return (2);
	if (*start + *len > (unsigned int)ft_strlen(str))
		*len = ft_strlen(str) - *start;
	if (*start > (unsigned int)ft_strlen(str))
		return (0);
	return (1);
}

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	unsigned int		i;
	char				*dest;

	i = 0;
	if (ft_special_cases(str, &start, &len) == 2)
		return (NULL);
	if (!ft_special_cases(str, &start, &len))
	{
		dest = (char *)malloc(1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	while (i < len && str[start])
	{
		dest[i] = str[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char str[] = "abcdefgh";
	printf("%s", ft_substr(str, 5, 20));
	return (0);
}*/
