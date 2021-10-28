/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 00:07:13 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/28 00:18:49 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	s[7];
	char	*cpy;

	strcpy(s, "hello\n");
	cpy = ft_strdup(s);
	printf("%s", cpy);
	free(cpy);
	return (0);
}
