/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:02:41 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/04/17 17:01:30 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

void	ft_substr(const char *str, int start, int length)
{
	int	i;
	int	j;
	i = 0;

	if (start < 0)
	{
		start = strlen(str) + start;
	}

	if (start < 0)
	{
		return (NULL);
	}

	char* substr =

	while(i <= length)
	{
		write(1, &str[start], 1);
		i++;
		start++;
	}
}

int	main()
{
	char	str[] = "abcdefgh";
	ft_substr(str, 2, 1);
	return (0);
}
