/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:26:33 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/14 17:27:16 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int main() {
    t_list node1, node2, node3;
    t_list *list = &node1;
    node1.next = &node2;
    node2.next = &node3;
    node3.next = NULL;
    node3.content = "last one";
    t_list *lastnode = ft_lstlast(list);
    printf("%s", (char *)lastnode->content));
    return 0;
}*/
