/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:17:09 by abuonomo          #+#    #+#             */
/*   Updated: 2022/12/03 17:17:10 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	lenght_nbr(int nbr, char *base, int lenght)
{
	int				base_l;
	unsigned int	nb;

	base_l = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		lenght++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_l)
	{
		nb /= base_l;
		lenght++;
	}
	lenght++;
	return (lenght);
}

void	ft_putnbr_base_2(int nbr, char *base, char *nbrf)
{
	int		l_base;
	long	nb;
	int		i;
	int		l_nbrf;

	l_base = ft_strlen(base);
	l_nbrf = lenght_nbr(nbr, base, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		nbrf[0] = '-';
		nb *= -1;
		i = 1;
	}
	l_nbrf--;
	while (nb >= l_base)
	{
		nbrf[l_nbrf] = base[nb % l_base];
		nb /= l_base;
		l_nbrf--;
	}
	if (nb < l_base)
		nbrf[i] = base[nb];
}
