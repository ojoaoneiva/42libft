/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:57:00 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/04/17 19:10:36 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, size_t n)
{
	int	i;
	size_t	j;
	const unsigned char *s = str;
	i = 0;
	j = 0;
	while(str[i] != '\0' && j < n)
	{
		if(str[i] == c)
			return (str[i]);
		i++;
		j++;
	}
	return (0);
}

int	main()
{
	char	str[] = "abcdefghi";
	char	c = 'c';
	size_t	n = 8;
	ft_memchr(str, c, n);
}
