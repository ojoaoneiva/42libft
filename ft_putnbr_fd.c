/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:59:12 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/03/14 17:38:25 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
	}
	nb = (nb % 10) + 48;
	write(fd, &nb, 1);
}
/*
int main()
{
        ft_putnbr_fd(4563, 1);
        write(1, "\n", 1);
        ft_putnbr_fd(5, 1);
        write(1, "\n", 1);
        ft_putnbr_fd(0, 1);
        write(1, "\n", 1);
        ft_putnbr_fd(2147483647, 1);
        write(1, "\n", 1);
        ft_putnbr_fd(-2147483648, 1);
        write(1, "\n", 1);
        ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
        ft_putnbr_fd(-10, 1);
        write(1, "\n", 1);
	return (0);
}*/