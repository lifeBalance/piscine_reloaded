/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrodri <rodrodri@student.hive.fi >       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:42:57 by rodrodri          #+#    #+#             */
/*   Updated: 2021/10/28 21:56:23 by rodrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	buffer[1];

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		fd = open(argv[1], O_RDONLY);
		while (read(fd, &buffer, 1))
			write(1, &buffer, 1);
		close(fd);
	}
	return (0);
}
