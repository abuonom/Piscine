/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:47:26 by abuonomo          #+#    #+#             */
/*   Updated: 2022/11/30 15:51:23 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*put_separator(char *str, char *sep, int l)
{
	int	i;

	i = 0;
	while (i < l)
		*(str++) = sep[i++];
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		l;
	int		x;
	int		y;
	char	*str;

	l = 0;
	if (size == 0)
		return (str = malloc (sizeof(char)));
	x = 0;
	while (x++ < size)
		l = l + ft_strlen(strs[x]);
	l += (ft_strlen(sep) * (size - 1));
	str = malloc (sizeof(char) * l + 1);
	x = 0;
	while (x++ < size)
	{
		y = 0;
		while (strs[x][y] != '\0')
			*(str++) = strs[x][y++];
		if (x != size - 1)
			str = put_separator(str, sep, ft_strlen(sep));
	}
	*str = '\0';
	return (str -= l);
}
