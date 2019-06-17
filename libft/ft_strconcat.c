/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gthomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 12:14:03 by gthomas           #+#    #+#             */
/*   Updated: 2016/12/02 12:25:13 by gthomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strconcat(char **dest, const char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((*dest)[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		(*dest)[i] = src[j];
		i++;
		j++;
	}
	(*dest)[i] = '\0';
}