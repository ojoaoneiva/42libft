/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:44:04 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/03/05 16:44:14 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_isprint(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	if (str[0] != '\0')
	{
		while (str[i] != '\0')
		{
			if ((str[i] >= 32 && str[i] <= 126))
			{
				i++;
			}
			else
			{
				x = 0;
				i++;
				break ;
			}
		}
	}
	return (x);
}
/*
int main()
{
	char k[] = "dfhf";
	int j;
	j = ft_isprint(k);
	printf("%d", j);
}*/
