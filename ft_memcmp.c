/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:14:40 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/04/19 15:27:08 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str1)[i] - 
					((unsigned char *)str2)[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	s1[] = "abfd";
	char	s2[] = "abcd";
	size_t	n = 3;
	printf("%d", ft_memcmp(s1, s2, n));
}*/
