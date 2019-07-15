/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 17:32:16 by fcodi             #+#    #+#             */
/*   Updated: 2019/04/05 20:10:07 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*numbers;
	int		i;
	int		j;

	if (min >= max)
		return (NULL);
	numbers = (int *)malloc(sizeof(int) * (max - min));
	i = min - 1;
	j = -1;
	while (++i <= max)
		numbers[++j] = i;
	return (numbers);
}
