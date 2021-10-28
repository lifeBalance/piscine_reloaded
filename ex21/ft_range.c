/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:21:04 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/28 10:36:11 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	j;

	if (min >= max)
		return (0);
	arr = malloc(sizeof(*arr) * (max - min));
	if (!arr)
		exit(EXIT_FAILURE);
	i = 0;
	j = min;
	while (i < (max - min))
	{
		arr[i] = j;
		i++;
		j++;
	}
	return (arr);
}
