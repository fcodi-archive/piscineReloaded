/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 10:41:58 by fcodi             #+#    #+#             */
/*   Updated: 2019/04/08 14:05:25 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstrm(char **av, int ac)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j] != '\0')
			ft_putchar(av[i][j]);
		ft_putchar('\n');
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = -1;
	while (s1[++i] != '\0')
		if (s1[i] != s2[i])
		{
			if (s2[i] == '\0')
				return (1);
			else
				return (s1[i] - s2[i]);
		}
	return (0);
}

void	ft_ptrswap(void **p1, void **p2)
{
	void	*swap;

	swap = *p1;
	*p1 = *p2;
	*p2 = swap;
}

int		main(int ac, char **av)
{
	void	**mptr;
	int		trigger;
	int		i;

	if (ac == 1)
		return (-1);
	trigger = 1;
	mptr = (void **)av;
	while (trigger > 0)
	{
		trigger = 0;
		i = 0;
		while (++i < (ac - 1))
		{
			if (ft_strcmp((char *)mptr[i], (char *)mptr[i + 1]) == 0)
				continue;
			if (ft_strcmp((char *)mptr[i], (char *)mptr[i + 1]) > 0)
			{
				ft_ptrswap(&mptr[i], &mptr[i + 1]);
				trigger++;
			}
		}
	}
	ft_putstrm((char **)mptr, ac);
	return (0);
}
