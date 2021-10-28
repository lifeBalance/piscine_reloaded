/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 00:38:52 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/29 00:08:07 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	n;

	n = 0;
	printf("%d! = %d\n", n, ft_recursive_factorial(n));
	n = 1;
	printf("%d! = %d\n", n, ft_recursive_factorial(n));
	n = 5;
	printf("%d! = %d\n", n, ft_recursive_factorial(n));
	n = -1;
	printf("%d! = %d\n", n, ft_recursive_factorial(n));
	/*
	** Maximum number the function can handle:
	** 15! = 2,004,310,016
	** int range : -2,147,483,648 to 2,147,483,647
	*/
	n = 15;
	printf("%d! = %d\n", n, ft_recursive_factorial(n));
	n = 16;
	printf("%d! = %d\n", n, ft_recursive_factorial(n));
	return (0);
}
