/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:42:26 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/03/12 09:56:46 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0' || s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
static void	del_content(void *content)
{
	free(content);
};

int	main()
{
	char sa[] = "abcd";
	char sb[] = "abcf";
	unsigned int n = 4;
	int x;
	x = ft_strncmp(sa, sb, n);
	//x = strncmp(sa, sb, n);
	printf("%d", x);
}*/