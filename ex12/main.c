/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 00:38:52 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/27 15:38:23 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	n;

	n = 0;
	printf("%d! = %d\n", n, ft_iterative_factorial(n));
	n = 1;
	printf("%d! = %d\n", n, ft_iterative_factorial(n));
	n = 5;
	printf("%d! = %d\n", n, ft_iterative_factorial(n));
	n = -1;
	printf("%d! = %d\n", n, ft_iterative_factorial(n));
	return (0);
}
