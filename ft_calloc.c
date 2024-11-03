/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhaciogl <hhaciogl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:34:44 by hhaciogl          #+#    #+#             */
/*   Updated: 2024/11/03 20:04:47 by hhaciogl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num_of_elements, size_t size_of_element)
{
	void	*piece_of_memory;
	size_t	size_of_memory;

	size_of_memory = num_of_elements * size_of_element;
	piece_of_memory = malloc(size_of_memory);
	if (piece_of_memory == NULL)
		return (NULL);
	return (ft_memset(piece_of_memory, 0, size_of_memory));
}
