/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:38:56 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/10/27 20:15:44 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_substr;

	new_substr = malloc((len + 1) * sizeof(*new_substr));
	if (new_substr == NULL)
		return (NULL);
	ft_strlcpy(new_substr, s + start, len + 1);
	return (new_substr);
}
