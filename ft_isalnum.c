/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:25:21 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/04/10 16:44:52 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_isalpha(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			i++;
		else if (str[i] >= 97 && str[i] <= 122)
			i++;
		else if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
		{
			x = 0;
			i++;
			break ;
		}
	}
	return (x);
}
/*
int main()
{
	char k[] = "dfghS";
	ft_isalpha(k);
}*/
