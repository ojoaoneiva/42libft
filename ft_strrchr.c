/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:56:52 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/04/10 16:51:01 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(char *str, char c)
{
	int	i;
	int	start;

	i = 0;
	start = -1;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			start = i;
		i++;
	}
	if (str[i] == c)
		start = i;
	if (start != -1)
		return (&str[start]);
	else
		return (NULL);
}
/*
int	main()
{
	char *y;
	char c = 'c';
	char x[] = "abcdefgch";
	y = ft_strrchr(x,c);
	printf("%s", y);
}*/
