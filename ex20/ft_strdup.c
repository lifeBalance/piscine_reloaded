/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:07:13 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/28 00:25:55 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;

	len = 0;
	while (src[len])
		len++;
	cpy = malloc(len);
	if (!cpy)
		exit(EXIT_FAILURE);
	while (len >= 0)
	{
		cpy[len] = src[len];
		len--;
	}
	return (cpy);
}
