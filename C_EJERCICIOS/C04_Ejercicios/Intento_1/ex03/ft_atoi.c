/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 11:50:35 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/30 12:15:10 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	dev;

	i = 0;
	neg = 1;
	dev = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		dev = (dev * 10) + (str[i] - '0');
		i++;
	}
	return (dev * neg);
}
/*#include <stdio.h>
int	main(int argc, char *argv[])
{
	char	a[] = "Eres bobo";
	if (argc == 2)
	{
		printf("%d", ft_atoi(argv[1]));
		return (0);
	}
	else 
	{
		printf("%s", a);
		return (0);
	}
}*/
