/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:48:56 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/28 13:07:14 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <stdio.h>

int	main()
{
	ft_putchar('X');
	ft_putstr("OOO");
	ft_putchar('X');
	ft_putchar('\n');
	printf("length of %s: %d\n", "hello", ft_strlen("hello"));
	return (0);
}

/*
** To compile: gcc -Wall -Werror -Wextra main.c -I./includes -L. -lft
**
** -I./includes is for the location of the header (./includes/ft_libft.h)
** -L. is for the location of the Static Library (./libft.a)
** -lft is for the Name of the static library (libft.a, but
** we gotta leave the 'lib' and the '.a' extension out.)
*/
