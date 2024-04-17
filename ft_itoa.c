/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:02:19 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/04/17 17:57:08 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_swap(char *buffer, int i, char sign)
{
	int		j;
	char	aux;

	if (sign == '-')
	{
		buffer[i] = sign;
		i++;
	}
	buffer[i] = '\0';
	i = i - 1;
	j = 0;
	while (i > j)
	{
		aux = buffer[i];
		buffer[i] = buffer[j];
		buffer[j] = aux;
		i--;
		j++;
	}
	return (buffer);
}

char	*ft_itoa(int num, char *buffer, int base)
{
	char	sign;
	int		result;
	int		i;

	i = 0;
	if (num < 0 && base == 10)
	{
		sign = '-';
		num = -num;
	}
	while (num != 0)
	{
		result = num % base;
		if (result > 9)
			buffer[i] = (result - 10) + 'a';
		else
			buffer[i] = result + '0';
		i++;
		num = num / base;
	}
	ft_swap(buffer, i, sign);
	return (buffer);
}
/*
int	main()
{
	int x = -42567;
	char buffer[20];
	ft_itoa(x, buffer, 10);
	//sprintf(buffer, "%d", x);
	printf("%s", buffer);
}*/
