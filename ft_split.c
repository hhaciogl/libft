/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:30:07 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/10/28 20:09:17 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// str ABA  delimeter B
char	**ft_split(char const *str, char delimiter)
{
	char const	*trimed_str;
	char		*deli_address;
	char		**out;

	out = malloc(3 * sizeof(*out));
	trimed_str = str;
	deli_address = ft_strchr(trimed_str, delimiter);
	out[0] = ft_substr(trimed_str, 0, deli_address - trimed_str);
	trimed_str = deli_address + 1;
	deli_address = ft_strchr(trimed_str, delimiter);
	out[1] = ft_substr(trimed_str, 0, deli_address - trimed_str);
	trimed_str = str;
	out[2] = NULL;
	return (out);
}
