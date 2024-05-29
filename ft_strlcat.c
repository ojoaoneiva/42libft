/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:01:36 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/03/12 10:21:58 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	while (src[j] != '\0')
		j++;
	if (i < size)
		return (i + j);
	else
		return (size + j);
}
/*
int	main()
{
	int i;
	char a[] = "a";
	char b[] = "hello world";
	unsigned int	n;
	n = 3;
	i = ft_strlcat(a, b, n);
	printf("%d", i);
	return (0);
}*/