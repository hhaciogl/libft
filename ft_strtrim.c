/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:38:35 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/10/27 23:22:05 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	int		is_start_found;
	int		is_end_found;

	len = ft_strlen(s1);
	end = len - 1;
	start = 0;
	is_end_found = 0;
	is_start_found = 0;
	while ((start < end) && (!is_end_found || !is_start_found))
	{
		if (!is_start_found && ft_strchr(set, s1[start]))
			start++;
		else
			is_start_found = 1;
		if (!is_end_found && ft_strchr(set, s1[end]))
			end--;
		else
			is_end_found = 1;
	}
	return (ft_substr(s1, start, end + 1 - start));
}