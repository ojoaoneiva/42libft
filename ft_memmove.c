/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:59:45 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/06 11:34:00 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_mem;
	const unsigned char	*src_mem;
	size_t				i;

	dest_mem = (unsigned char *)dest;
	src_mem = (const unsigned char *)src;
	if (dest_mem < src_mem && src_mem < dest_mem + n)
	{
		i = 0;
		while (i < n)
		{
			dest_mem[i] = src_mem[i];
			i++;
		}
	}
	else 
	{
		i = n;
		while (i > 0)
		{
			dest_mem[i - 1] = src_mem[i - 1];
			i--;
		}
	}
	return (dest);
}
/*
int main() {
    const char src[] = "hello";
    char dest[6] = "";
    ft_memmove(dest, src, 5);
    printf("%s\n", dest);
    return 0;
}*/
