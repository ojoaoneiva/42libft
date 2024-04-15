/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:56:33 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/04/10 16:41:00 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	if (src[0] == '\0')
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		i++;
	}
	printf("%d", i);
	dest = (char *)malloc(i + 1);
	if (!dest)
	{
		return (NULL);
	}
	ft_strcpy(dest, src);
	return (dest);
}
/*
int	main(void)
{
	char src[] = "hello";
	char *copia = ft_strdup(src);
	printf("%s", copia);
	free(copia);
	return (0);
}*/
