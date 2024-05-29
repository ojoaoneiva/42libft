/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:20:17 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/15 14:58:12 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*final;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	final = (char *)malloc(s1len + s2len + 1);
	if (!final)
		return (NULL);
	ft_strlcpy(final, s1, s1len + 1);
	ft_strlcat(final, s2, s1len + s2len + 1);
	return (final);
}
/*
int	main(void)
{
	char	*strs[] = {"uva", "maca", "abacaxi"};
	char	*sep = "123";
	char	*result;
	result = ft_strjoin(3, strs, sep);
	printf("%s", result);
	free(result);
	return (0);
}*/
