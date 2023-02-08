/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:55:28 by abuonomo          #+#    #+#             */
/*   Updated: 2022/11/29 11:59:23 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	nbfatt;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	nbfatt = nb;
	while (nb != 1)
	{
		nbfatt = nbfatt * --nb;
	}
	return (nbfatt);
}
