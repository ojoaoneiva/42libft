/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:22:32 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/14 17:22:34 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void print_content(void *content) {
    printf("%s\n", (char *)content);
}

int main() {
    t_list node1, node2, node3;
    t_list *list = &node1;
    node1.content = "node 1";
    node2.content = "node 2";
    node1.next = &node2;
    node2.next = NULL;

    ft_lstiter(list, &print_content);
    return 0;
}*/
