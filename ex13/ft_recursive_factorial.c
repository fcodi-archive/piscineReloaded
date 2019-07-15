/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 07:47:18 by fcodi             #+#    #+#             */
/*   Updated: 2019/04/08 14:22:42 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		g_trigger = 0;

int		ft_recursive_factorial(int nb)
{
	if ((g_trigger == 0 && nb > 12) || nb < 0)
	{
		g_trigger++;
		return (0);
	}
	if (nb == 0 || nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
