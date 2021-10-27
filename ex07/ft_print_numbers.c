/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:18:12 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/27 12:21:05 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

void	ft_print_numbers(void)
{
	char	ch;

	ch = '0';
	while (ch <= '9')
		ft_putchar(ch++);
}
