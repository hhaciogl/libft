/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:30:07 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/13 21:27:33 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static char **clean_up(char ***out, size_t out_size)
{
	size_t	i;

	i = 0;

	while (out_size)
	{
		out_size--;
		printf("i::%zu\n", out_size);
		printf("word::%s\n", (*out)[out_size]);
		free((*out)[out_size]);
	}
	free(out);
	return (NULL);
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
		if(s[i] != '\0')
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
			word = NULL;
			if (word == NULL)
				return clean_up(&out, out_size);
			out[out_size] = word;
			// printf("word: %s\n", out[out_size]);
			// printf("size: %lu\n", out_size);
			out_size++;
		}
		if(s[i] != '\0')
			i++;
	}
	out[out_size] = NULL;
	return out;
}