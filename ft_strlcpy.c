/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:58:47 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/03/12 13:51:36 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
//#include <stdio.h>

int	ft_strlcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*
int main()
{
	int o;
	char old[] = "abcde";
	char new[] = "";

	printf("%s \n", old);

	o = ft_strlcpy(new, old);
	printf("%s", new);
	printf("%d", o);
}*/
