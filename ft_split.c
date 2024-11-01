/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:30:07 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/01 19:00:58 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "log.h"

t_list	*create_node(void *val)
{
	t_list	*node;

	node = malloc(sizeof(node));
	if (node != NULL)
	{
		node->context = val;
		node->next = NULL;
	}
	return (node);
}

void	add_node(t_list **head, void *val)
{
	t_list	*node;
	t_list	*curr;

	node = create_node(val);
	if (*head == NULL)
		*head = node;
	else
	{
		curr = *head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = node;
	}
}

char	**list_to_arr(t_list *head)
{
	size_t	size;
	t_list	*curr;
	char	**out;

	size = 0;
	curr = head;
	while (curr != NULL )
	{
		curr = curr->next;
		size++;
	}
	out = malloc((size) * sizeof(*out));
	size = 0;
	curr = head;
	while (curr != NULL)
	{
		if (out == NULL)
			free(curr->context);
		else
			out[size] = (char *)curr->context;
		curr = curr->next;
		size++;
	}
	return (out);
}

char	*_split(t_list **head, char *dest, char separator)
{
	char	*word;
	char	set[2];
	char	*temp;
	size_t	i;

	set[0] = separator;
	set[1] = '\0';
	i = 0;
	temp = ft_strtrim(dest, set);
	ft_strlcpy(dest, temp, ft_strlen(temp)+1);
	free(temp);
	while (dest[i] != separator && dest[i] != '\0')
		i++;
	word = ft_substr(dest, 0, i);
	if (i == 0)
	{
		free(word);
		add_node(head, NULL);
		return (NULL);
	}
	add_node(head, word);
	ft_memmove(dest, dest + i, ft_strlen(dest + i) + 1);
	return (_split(head, dest, separator));
}

char	**ft_split(char const *str, char separator)
{
	t_list	*head;
	char	**out;
	t_list	*current;
	t_list	*next_node;
	char	*dest;

	head = NULL;
	dest = ft_strdup(str);
	_split(&head, dest, separator);
	out = list_to_arr(head);
	free(dest);
	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	return (out);
}
