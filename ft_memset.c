/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 23:04:31 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/10/21 15:29:49 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointer_s;
	size_t			i;

	pointer_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		pointer_s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
