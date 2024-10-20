/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 23:04:31 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/10/20 23:23:40 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*pointer_s;
	size_t	i;

	pointer_s = (char *)s;
	i = 0;
	while (i < n)
	{
		pointer_s[i] = c;
		i++;
	}
	return (s);
}
