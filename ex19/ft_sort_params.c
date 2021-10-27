/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:55:17 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/27 23:41:15 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		compare_args(char *s1, char *s2);
void	sort_params(char **params, int n);
void	ft_putchar(char ch);

int	main(int argc, char *argv[])
{
	int		i;

	sort_params(argv + 1, argc - 1);
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

int	compare_args(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			break ;
	}
	return (*s1 - *s2);
}

void	sort_params(char **params, int n)
{
	int		i;
	char	*tmp;

	while (n >= 1)
	{
		i = 0;
		while (i < n - 1)
		{
			if (compare_args(params[i], params[i + 1]) > 0)
			{
				tmp = params[i];
				params[i] = params[i + 1];
				params[i + 1] = tmp;
			}
			i++;
		}
		n--;
	}
}
