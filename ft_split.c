/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:30:07 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/04 20:10:16 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	t_list	*create(void *val)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node != NULL)
	{
		node->content = val;
		node->next = NULL;
	}
	return (node);
}

static void	add_node(t_list **head, void *val)
{
	t_list	*node;
	t_list	*curr;

	node = create(val);
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

static char	**list_to_arr(t_list *head)
{
	size_t	size;
	t_list	*curr;
	char	**out;

	size = 0;
	curr = head;
	while (curr != NULL)
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
			free(curr->content);
		else
			out[size] = (char *)curr->content;
		curr = curr->next;
		size++;
	}
	return (out);
}

static char	*_split(t_list **head, char *dest, char separator)
{
	t_vars	arg;
	size_t	i;

	arg.set[0] = separator;
	arg.set[1] = '\0';
	i = 0;
	arg.temp = ft_strtrim(dest, arg.set);
	if (arg.temp == NULL)
		return (NULL);
	ft_strlcpy(dest, arg.temp, ft_strlen(arg.temp) + 1);
	free(arg.temp);
	while (dest[i] != separator && dest[i] != '\0')
		i++;
	arg.word = ft_substr(dest, 0, i);
	if (arg.word == NULL)
		return (NULL);
	if (i == 0)
	{
		free(arg.word);
		add_node(head, NULL);
		return ("");
	}
	add_node(head, arg.word);
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
	if (dest == NULL)
		return (NULL);
	if (_split(&head, dest, separator) == NULL)
		out = NULL;
	else
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
