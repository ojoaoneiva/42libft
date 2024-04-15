/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:44:55 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/03/05 17:44:59 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_tolower(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char k[] = "dA(TYBf";
	ft_tolower(k);
	printf("%s", k);
}*/
