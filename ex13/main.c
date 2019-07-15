/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:22:49 by fcodi             #+#    #+#             */
/*   Updated: 2019/04/08 14:28:38 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(int ac, char **av)
{
	ac = ac * 1;
	av[0][0] = 'X';
	printf("ft_recursive_factorial() = %d", ft_recursive_factorial(-1));
	return (0);	
}
