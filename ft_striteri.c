/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:55:46 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/04/30 12:21:35 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void test(unsigned int index, char *c)
{
    printf("%u", index);
    printf("%c \n", *c);
}

int main()
{
    char str[] = "Hello";
    ft_striteri(str, &test);
    return 0;
}
*/