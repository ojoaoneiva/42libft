/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:59:45 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/04/15 15:13:54 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest,const void *src, size_t n)
{
	size_t i;

	i = 0 ;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

int	main()
{
	const char src[] = "hello";
	char dest[] = "";

	ft_memmove(dest, src, 3);
	printf("%s", dest);
	return (0);
}
