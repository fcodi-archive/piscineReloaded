/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcodi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 15:53:30 by fcodi             #+#    #+#             */
/*   Updated: 2019/04/08 13:01:48 by fcodi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = -1;
	while (str[++i] != '\0')
		continue;
	return (i);
}

void	ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = -1;
	while (s1[++i] != '\0')
		s2[i] = s1[i];
	s2[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*str;

	if (src == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ft_strlen(src));
	if (str == NULL)
		return (NULL);
	ft_strcpy(src, str);
	return (str);
}
