/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:30:07 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/10/30 19:52:35 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "log.h"

// static size_t get_word_len(char *str, char separator)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i] == separator)
// 	{
// 		i++;
// 	}
// 	return (i);
// }
// static void get_word(char const *str, char separator,
// char *word, char *remaining)
// {
// 	size_t	len;
// 	char	*trimmed;
// 	char	set[2];

// 	set[0] = separator;
// 	set[1] = '\0';
// 	trimmed = ft_strtrim(str, set);
// 	len = get_word_len(trimmed, separator);
// 	word = ft_substr(trimmed, 0, len);
// 	if (!len)
// 		remaining = NULL;
// 	else
// 		remaining = ft_strdup(trimmed + len - 1);
// 	free(trimmed);
// }

// char	**ft_split(char const *str, char separator)
// {

// }