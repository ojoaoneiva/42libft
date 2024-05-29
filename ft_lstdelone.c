/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:12:16 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/15 15:06:22 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
/*
static void	del_content(void *content)
{
	free(content);
};

int main() {
    t_list *node = malloc(sizeof(t_list));
    node->content = malloc(2);
    node->content[0] = 'a';
    node->content[1] = '\0';
    node->next = NULL;
printf("%s\n", (char *)node->content);
    ft_lstdelone(node, &del_content);
    printf("%s\n", (char *)node->content);
    return 0;
}*/
