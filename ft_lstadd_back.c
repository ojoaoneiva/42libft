/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:23:02 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/14 17:25:17 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
		*lst = new;
	else
	{
		last = *lst;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
}
/*
int main() {
    t_list node1, node2, node3;
    t_list *list = &node1;
    node1.next = &node2;
    node2.next = NULL;
    ft_lstadd_back(&list, &node3);
    printf("last content of the list: %s\n", (char *)node3.content);
    return 0;
}*/
