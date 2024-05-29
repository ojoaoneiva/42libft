/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:57:00 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/04/19 17:15:46 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t				j;
	const unsigned char	*s;

	s = str;
	j = 0;
	while (j < n)
	{
		if ((unsigned char)s[j] == (unsigned char)c)
			return ((void *)s + j);
		j++;
	}
	return (0);
}
/*
int	main() {
	char	str[] = "abcdefghi";
	char	c = 'c';
	size_t	n = 7;
	printf("%s", (char *)ft_memchr(str, c, n));
} */