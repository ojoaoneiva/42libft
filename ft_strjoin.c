/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:20:17 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/03/19 11:48:39 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			k++;
			i++;
		}
		j++;
	}
	i = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	return (k + 1 + (i * (size - 1)));
}

void	ft_strcat(char *final, char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			final[k++] = strs[j][i++];
		}
		if (j + 1 < size)
		{
			i = 0;
			while (sep[i] != '\0')
			{
				final[k++] = sep[i++];
			}
		}
		j++;
	}
	final[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*final;
	int		k;

	if (size == 0)
	{
		final = (char *)malloc(1);
		if (final == NULL)
		{
			return (NULL);
		}
		*final = '\0';
		return (final);
	}
	k = ft_strlen(strs, size, sep);
	final = (char *)malloc(k);
	if (!final)
	{
		return (NULL);
	}
	ft_strcat(final, strs, size, sep);
	return (final);
}
/*
int	main(void)
{
	char	*strs[] = {"uva", "maca", "abacaxi"};
	char	*sep = "123";
	char	*result;
	result = ft_strjoin(3, strs, sep);
        printf("%s", result);
	free(result);
	return (0);
}*/
