/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:07:58 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/15 15:09:15 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/*
int main() {
    t_list node1, node2, node3;
    t_list *list = &node1;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;
    int x = ft_lstsize(list)
    printf("%d", x);
    return 0;
}*/
