/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 19:59:24 by mchemakh          #+#    #+#             */
/*   Updated: 2017/05/10 02:03:18 by mchemakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_stoa_next(char **str, size_t *num)
{
	int i;

	i = 0;
	if ((*num) == 0)
	{
		(*str)[i++] = '0';
		(*str)[i] = '\0';
		return ((*str));
	}
	return ((*str));
}

char			*ft_stoa_base(size_t num, int base)
{
	char	*str;
	int		i;
	int		rem;

	i = 0;
	str = ft_strnew(12);
	str = ft_stoa_next(&str, &num);
	if (str[0] == '0' && str[1] == '\0')
		return (str);
	while (num != 0)
	{
		rem = num % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / base;
	}
	str[i] = '\0';
	str = ft_strrev(str, i);
	return (str);
}
