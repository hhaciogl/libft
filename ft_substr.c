/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:38:56 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/04 16:14:37 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_substr;
	size_t	str_len;

	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if (str_len == 0 || start >= str_len)
	{
		new_substr = malloc((1) * sizeof(*new_substr));
		if (new_substr == NULL)
			return (NULL);
		ft_strlcpy(new_substr, "", 1);
		return (new_substr);
	}
	else
	{
		if (len >= str_len)
			len = str_len - start;
		new_substr = malloc((len + 1) * sizeof(*new_substr));
		if (new_substr == NULL)
			return (NULL);
	}
	ft_strlcpy(new_substr, s + start, len + 1);
	return (new_substr);
}
