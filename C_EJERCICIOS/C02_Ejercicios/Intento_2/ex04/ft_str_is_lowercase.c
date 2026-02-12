/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:35:02 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/17 13:42:26 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	char minusculas[] = "todomininusculas";
	char MAYUSCULAS[] = "TODOMAYUSCULAS";
	char minuespacio[] = "minus espacio";
	char notespacio[] = "";
	
	printf("El string '%s' devuelve 1: %d\n", 
	minusculas, ft_str_is_lowercase(minusculas));
	printf("El string '%s' devuelve 1: %d\n", 
	notespacio, ft_str_is_lowercase(notespacio));
	printf("El string '%s' devuelve 0: %d\n", 
	MAYUSCULAS, ft_str_is_lowercase(MAYUSCULAS));
	printf("El string '%s' devuelve 0: %d\n", 
	minuespacio, ft_str_is_lowercase(minuespacio));
}*/
