/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:35:53 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/28 16:29:07 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define SIZE 5

int	ft_count_if(char **tab, int (*f)(char*));
int	all_digits(char *str);

int	main(void)
{
	char	*arr[] = {
		"1234",
		"234",
		"abd",
		"123a",
		0
	};

	printf("Numeric strings in the array: %d\n", \
	ft_count_if(arr, &all_digits));
	return (0);
}

int	all_digits(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
