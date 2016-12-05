/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 21:17:26 by mchemakh          #+#    #+#             */
/*   Updated: 2016/11/14 22:02:12 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_strlen(char const *str)
{
	int nbrchar;

	nbrchar = 0;
	while (str[nbrchar])
		nbrchar++;
	return (nbrchar);
}
