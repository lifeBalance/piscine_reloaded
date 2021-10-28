/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:53:09 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/27 18:03:53 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	printf("ab == ab? %d\n", ft_strcmp("ab", "ab"));
	printf("ab == ba? %d\n", ft_strcmp("ab", "ba"));
	printf("ba == ab? %d\n", ft_strcmp("ba", "ab"));
	return (0);
}
