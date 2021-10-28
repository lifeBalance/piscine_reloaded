/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 10:21:04 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/28 10:36:23 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*arr;
	int	i;
	int	min;
	int	max;

	min = 3;
	max = 8;
	arr = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
