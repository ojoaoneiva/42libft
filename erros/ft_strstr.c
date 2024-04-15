/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:01:36 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/03/12 10:22:52 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <stdio.h>
//#include <string.h>

int	function2(char *str, char *to_find, int i, int seq);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	seq;
	int	x;

	i = 0;
	seq = 0;
	x = function2(str, to_find, i, seq);
	if (x == 0)
	{
		return (NULL);
	}
	return (&str[x]);
}

int	function2(char *str, char *to_find, int i, int seq)
{
	int	start;

	while (str[i] != '\0')
	{
		if (str[i] == to_find[seq])
		{
			if (seq == 0)
			{
				start = i;
			}
			if (to_find[seq + 1] == '\0')
			{
				return (start);
			}
			seq++;
		}
		else
		{
			seq = 0;
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	char sa[] = "hello world!";
	char sb[] = "wor";
	printf("%s", ft_strstr(sa, sb));
	//printf("%s", strstr(sa, sb));
	return (0);
}*/
