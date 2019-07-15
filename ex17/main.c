/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 13:54:49 by fcodi             #+#    #+#             */
/*   Updated: 2019/04/08 14:01:11 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main (int ac, char **av)
{
	if (ac != 3)
		return (-1);
	printf("ft_strcmp = %d\nstrcmp = %d\n", ft_strcmp(av[1], av[2]), strcmp(av[1], av[2]));
	return (0);
}
