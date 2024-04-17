/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:01:36 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/04/17 18:20:42 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	function2(char *str, char *to_find, int seq, int len);

char	*ft_strnstr(char *str, char *to_find, int len)
{
	int	i;
	int	seq;
	int	x;

	i = 0;
	seq = 0;
	x = function2(str, to_find, seq, len);
	if (x == -1 || x >= len)
		return (NULL);
	return (&str[x]);
}

int	function2(char *str, char *to_find, int seq, int len)
{
	int	start;
	int	i;

	start = -1;
	i = 0;
	if (*to_find == '\0')
		return (0);
	while (str[i] != '\0' && i < len)
	{
		if (str[i] == to_find[seq])
		{
			if (seq == 0)
				start = i;
			if (to_find[seq + 1] == '\0')
				return (start);
			seq++;
		}
		else
			seq = 0;
		i++;
	}
	return (-1);
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
