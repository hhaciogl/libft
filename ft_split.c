/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:30:07 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/10/29 19:39:27 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "log.h"

// str BBBAABBBBCCBBB  delimeter B
char	*get_sub_part(char const *str,
						char **out, size_t i, char deli)
{
	char	*new_str;
	char	set[2];
	char	*deli_address;

	set[0] = deli;
	set[1] = '\0';
	if (str == NULL)
	{
		out[i] = NULL;
		return (NULL);
	}
	new_str = ft_strtrim(str, set);
	deli_address = ft_strchr(new_str, deli);
	out[i] = ft_substr(new_str, 0, deli_address - new_str);
	return (get_sub_part(deli_address, new_str, out, i + 1, deli));
}

size_t	get_buff_items_num(char const *str, char deli)
{
	size_t	i;
	size_t	count;
	int		is_repeated;
	char	set[2];
	char	*new_str;

	set[0] = deli;
	set[1] = '\0';
	is_repeated = 0;
	count = 1;
	i = 0;
	new_str = ft_strtrim(str, set);
	while (new_str[i])
	{
		if (new_str[i] == deli && !is_repeated)
		{
			count++;
			is_repeated = 1;
		}
		else
			is_repeated = 0;
		i++;
	}
	free(new_str);
	return (count);
}

char	**ft_split(char const *str, char deli)
{
	size_t	buff_items_num;
	char	**buff;
	size_t	i;

	i = 0;
	buff_items_num = get_buff_items_num(str, deli);
	buff = malloc(buff_items_num * sizeof(char *));
	if (!buff)
		return (NULL);
	if (deli == '\0')
	{
		buff[0] = (char *)str;
		buff[1] = NULL;
	}
	get_sub_part(str, NULL, buff, 0, deli);
	return (buff);
}
