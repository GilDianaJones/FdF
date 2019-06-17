/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 10:46:50 by gthomas           #+#    #+#             */
/*   Updated: 2016/11/08 20:49:07 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (!(ret = (char *)malloc(size * sizeof(char))))
		return (NULL);
	while (i < size)
	{
		ret[i] = 0;
		i++;
	}
	return ((void *)ret);
}
