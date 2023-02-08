/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuonomo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:54:11 by abuonomo          #+#    #+#             */
/*   Updated: 2022/11/23 18:33:19 by abuonomo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z'
			&& str[i] != '\0' && str[i] < '0' && str[i] > '9')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		flag;
	char	c;

	i = 0;
	flag = 1;
	ft_strlowcase(str);
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (c >= '0' && c <= '9')
			flag = 0;
		if (flag == 1 && c >= 'a' && c <= 'z')
		{
			str[i] = str[i] - 32;
			flag = 0;
		}
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			flag = 1;
		i++;
	}
	return (str);
}
