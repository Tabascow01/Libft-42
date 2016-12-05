/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 21:15:54 by mchemakh          #+#    #+#             */
/*   Updated: 2016/11/14 21:57:31 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(char const *str, int c)
{
	unsigned char chr;

	chr = (unsigned char)c;
	while (*str != '\0' && *str != chr)
		str++;
	if (*str != (char)chr)
		return (0);
	else
		return ((char *)str);
}
