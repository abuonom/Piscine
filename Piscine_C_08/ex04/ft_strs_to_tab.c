/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:21:50 by abuonomo          #+#    #+#             */
/*   Updated: 2022/12/05 15:32:20 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	if (!*str)
		return (0);
	return (1 + ft_strlen(str + 1));
}

char	*ft_strdup(char *src, int len)
{
	char	*dst;
	int		i;

	dst = malloc(len + 1);
	if (!dst)
		return ((char *) 0);
	i = -1;
	while (src[++i])
		dst[i] = src[i];
	dst[i] = 0;
	return (dst);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*temp;

	temp = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!temp)
		return (0);
	i = -1;
	while (++i < ac)
	{
		temp[i].size = ft_strlen(av[i]);
		temp[i].str = av[i];
		temp[i].copy = ft_strdup(av[i], temp[i].size);
	}
	temp[i].str = 0;
	temp[i].size = 0;
	temp[i].copy = 0;
	return (temp);
}
