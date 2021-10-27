/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:11:35 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/27 18:52:55 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char ch);

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			ft_putchar(*argv[i]);
			argv[i]++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
