/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:57:18 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/10/27 01:27:13 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ctoi(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (c - 48);
	}
	return (-1);
}

static size_t	ten_pow(size_t pow)
{
	size_t	i;
	size_t	tens;

	i = 1;
	tens = 1;
	if (pow == 0)
		return (0);
	while (i < pow)
	{
		tens *= 10;
		i++;
	}
	return (tens);
}

int	ft_atoi(const char *abc)
{
	size_t	len;

	len = ft_strlen(abc);
	if (len == 0)
		return (0);
	if (len == 1)
		return (ctoi(abc[0]));
	return ((ctoi(abc[0]) * ten_pow(len)) + ft_atoi(abc + 1));
}
