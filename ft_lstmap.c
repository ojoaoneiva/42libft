/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jneiva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:27:38 by jneiva-s          #+#    #+#             */
/*   Updated: 2024/05/15 15:07:18 by jneiva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*last_one;

	if (!lst || !f)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (NULL);
	last_one = new_list;
	lst = lst->next;
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		last_one->next = new_node;
		last_one = new_node;
		lst = lst->next;
	}
	return (new_list);
}
/*
static void	del_content(void *content)
{
	free(content);
}

void *modify_content(void *content) {
    char *str = (char *)content;
    if (strlen(str) > 0) {
        char *modified_str = malloc(strlen(str) + 1);
        if (modified_str == NULL) {
            // Handle memory allocation failure
            return NULL;
        }
        strcpy(modified_str, str);
        modified_str[0] = 'z';
        return modified_str;
    }
    return NULL; // Return NULL if the string is empty
}

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main()
{
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = strdup("Hello");
    node1->next = NULL;

    t_list *node2 = malloc(sizeof(t_list));
    node2->content = strdup("World");
    node2->next = NULL;

    node1->next = node2;

    t_list *list = node1;

    t_list *new_list = ft_lstmap(list, &modify_content, &del_content);

    if (new_list) {
        printf("New list:\n");
        ft_lstiter(new_list, &print_content);
    }

    ft_lstclear(&list, &del_content); 
    ft_lstclear(&new_list, &del_content);
    return 0;
}*/
