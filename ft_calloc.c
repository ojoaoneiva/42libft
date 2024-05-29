/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:18:44 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/15 15:10:40 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dest;
	size_t	i;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	i = 0;
	dest = (void *)malloc(count * size);
	if (!dest)
		return (NULL);
	while (i < count * size)
	{
		((unsigned char *)dest)[i] = 0;
		i++;
	}
	return (dest);
}
/*
int	main()
{
	size_t count = 3;
	size_t size = 1;
	printf("%p", ft_calloc(count,size));
	free(ptr);
	return 0;
}*/
