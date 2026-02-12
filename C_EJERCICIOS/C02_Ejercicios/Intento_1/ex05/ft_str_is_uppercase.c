/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:57:37 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/20 13:19:34 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	char mayus[] = "MAYUSCULAS";
	char silencio[] = "";
	char minus[] = "minusculas";
	char mayuspacio[] = "MAYUS CULAS";

	printf("El string %s imprime: %d.\n", 
	mayus, ft_str_is_uppercase(mayus));
	printf("El string %s imprime: %d.\n", 
	silencio, ft_str_is_uppercase(silencio));
	printf("El string %s imprime: %d.\n", 
	minus, ft_str_is_uppercase(minus));
	printf("El string %s imprime: %d.\n", 
	mayuspacio, ft_str_is_uppercase(mayuspacio));
	return (0);
}*/
