/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:30:07 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/13 20:30:29 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static void clean_up(char ***out, size_t out_size)
{
	size_t	i;

	i = 0;
	while (out_size)
	{
		out_size--;
		free((*out)[out_size]);
	}
	free(out);
}


char	**ft_split(char const *s, char c)
{
	size_t  word_start;
	size_t	i;
	size_t	out_size;
	char 	**out;
	char	*word;

	i = 0;
	out_size = 0;
	word_start = 0;
	out = NULL;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			out_size++;
		}
		i++;
	}
	out = malloc((out_size+1) * sizeof(char *));
	if (out == NULL)
		return (NULL);
	i = 0;
	out_size = 0;
	word_start = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			word = ft_substr(s, word_start, (i - word_start));
			if (word == NULL)
			{
				clean_up(&out, out_size);
			}
			out[out_size] = word;
			// printf("word: %s\n", out[out_size]);
			// printf("size: %lu\n", out_size);
			out_size++;
		}
		i++;
	}
	out[out_size] = NULL;
	return out;
}