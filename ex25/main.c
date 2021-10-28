/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:35:53 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/28 15:58:41 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define SIZE 5

void	ft_foreach(int *tab, int length, void (*f)(int));
void	ft_print_triple(int elem);

int	main(void)
{
	int	arr[SIZE];
	int	i;

	i = 0;
	while (i < SIZE)
	{
		arr[i] = i;
		i++;
	}
	ft_foreach(arr, SIZE, &ft_print_triple);
	return (0);
}

void	ft_print_triple(int elem)
{
	printf("%d\n", elem * 3);
}
