/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:19:57 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/14 17:21:28 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next;

	node = *lst;
	if (!lst || !*lst)
		return ;
	while (node)
	{
		next = node->next;
		del(node->content);
		free(node);
		node = next;
	}
	*lst = NULL;
}
/*
static void	del_content(void *content)
{
	free(content);
};

int main() {
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = malloc(2);
    node1->content[0] = 'a';
    node1->content[1] = '\0';
    node1->next = NULL;

    t_list *node2 = malloc(sizeof(t_list));
    node2->content = malloc(2);
    node2->content[0] = 'b';
    node2->content[1] = '\0';
    node2->next = NULL;

    node1->next = node2;

    t_list *list = node1;

    printf("list:\n");
    while (list) {
        printf("%s\n", (char *)list->content);
        list = list->next;
    }

    ft_lstclear(&node1, &del_content);

    printf("list:\n");
    while (list) {
        printf("%s\n", (char *)list->content);
        list = list->next;
    }

    return 0;
}*/
