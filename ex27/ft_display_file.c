/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:33:01 by fcodi             #+#    #+#             */
/*   Updated: 2019/04/08 14:32:06 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	i = -1;
	while (str[++i] != '\0')
		continue;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int		ft_display_file(char *path)
{
	int		result;
	char	c;

	result = open(path, O_RDONLY);
	if (result == -1)
		return (result);
	while (read(result, &c, 1) != 0)
		write(1, &c, 1);
	close(result);
	return (result);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		if (ac == 1)
		{
			ft_putstr("File name missing.");
			ft_putchar('\n');
		}
		if (ac > 2)
		{
			ft_putstr("Too many arguments.");
			ft_putchar('\n');
		}
		return (-1);
	}
	return (ft_display_file(av[1]));
}
