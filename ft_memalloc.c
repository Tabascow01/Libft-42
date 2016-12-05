/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:08:27 by mchemakh          #+#    #+#             */
/*   Updated: 2016/11/14 21:49:14 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*memalloc;

	if ((memalloc = malloc(sizeof(size_t) * size)) != NULL)
	{
		ft_memset(memalloc, 0, size);
		return (memalloc);
	}
	return (0);
}
