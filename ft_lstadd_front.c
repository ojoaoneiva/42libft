/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:53:34 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/14 17:25:50 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main() {
    t_list *list = NULL;
    t_list *newnode = malloc(sizeof(t_list));
    new_node->content = "test";
    new_node->next = NULL;

    ft_lstadd_front(&list, newnode);
    printf("%s\n", (char *)list->content);
    free(list);
    return 0;
}*/
