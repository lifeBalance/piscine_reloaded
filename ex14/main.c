/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 00:38:52 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/27 16:20:37 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	n;

	n = 0;
	printf("Sqrt of %d = %d\n", n, ft_sqrt(n));
	n = 1;
	printf("Sqrt of %d = %d\n", n, ft_sqrt(n));
	n = 5;
	printf("Sqrt of %d = %d\n", n, ft_sqrt(n));
	n = 25;
	printf("Sqrt of %d = %d\n", n, ft_sqrt(n));
	n = -1;
	printf("Sqrt of %d = %d\n", n, ft_sqrt(n));
	return (0);
}
