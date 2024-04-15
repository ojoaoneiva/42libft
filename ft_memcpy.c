# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
#                                                     +:+ +:+         +:+      #
#    By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/15 14:12:11 by jneiva-s          #+#    #+#              #
/*   Updated: 2024/04/15 14:45:11 by jneiva-s         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

int	main()
{
	const char src[] = "hello world!";
	const char dest[] = "dfdffghgjkdgtfyh";
	
	ft_memcpy(dest, src, strlen(src)+1);
	printf("%s", dest);

	return(0);
}
