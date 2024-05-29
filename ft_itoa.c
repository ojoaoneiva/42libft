/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:02:19 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/15 15:04:02 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_swap(char *str, int i, char sign)
{
	int		j;
	char	aux;

	if (sign == '-')
	{
		str[i] = sign;
		i++;
	}
	str[i] = '\0';
	i = i - 1;
	j = 0;
	while (i > j)
	{
		aux = str[i];
		str[i] = str[j];
		str[j] = aux;
		i--;
		j++;
	}
	return (str);
}

static char	*ft_special_cases(int num)
{
	char	*str;

	if (num == 0)
	{
		str = (char *)malloc(2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (num == -2147483648)
	{
		str = (char *)malloc(12);
		if (!str)
			return (NULL);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	return (NULL);
}

static char	*ft_convert(int num, char sign, int i)
{
	int		result;
	char	*str;

	if (sign == '-')
		str = (char *)malloc(i + 2);
	else
		str = (char *)malloc(i + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (num != 0)
	{
		result = num % 10;
		str[i++] = result + '0';
		num = num / 10;
	}
	ft_swap(str, i, sign);
	return (str);
}

char	*ft_itoa(int num)
{
	char	sign;
	int		result;
	int		i;
	char	*str;

	i = 0;
	sign = '\0';
	str = ft_special_cases(num);
	if (str)
		return (str);
	if (num < 0)
	{
		sign = '-';
		num = -num;
	}
	result = num;
	while (result != 0)
	{
		result = result / 10;
		i++;
	}
	return (ft_convert(num, sign, i));
}

/*
int	main()
{
	int x = -42567;
	char *result = ft_itoa(x);
	printf("%s\n", result);
	free(result);
	return (0);
}*/
