/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:38:56 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/10/28 13:36:46 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_substr;
	size_t	str_len_limit_memory;

	str_len_limit_memory = ft_strlen(s);
	if (len > str_len_limit_memory)
		len = str_len_limit_memory;
	new_substr = malloc((len + 1) * sizeof(*new_substr));
	if (new_substr == NULL)
		return (NULL);
	if (start > str_len_limit_memory)
	{
		ft_strlcpy(new_substr, "", 1);
		return (new_substr);
	}
	ft_strlcpy(new_substr, s + start, len + 1);
	return (new_substr);
}
