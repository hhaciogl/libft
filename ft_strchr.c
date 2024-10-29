/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:54:07 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/10/29 13:40:57 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int chr)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if ((char)str[i] == (char)chr)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if ((char)chr == '\0')
	{
		return ((char *)&str[i]);
	}
	return (0);
}
