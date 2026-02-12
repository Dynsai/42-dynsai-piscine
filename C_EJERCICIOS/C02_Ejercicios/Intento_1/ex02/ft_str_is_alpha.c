/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:27:29 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/17 12:08:09 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	char string[] = "Prueba";
	char stringnum[] = "Pru3b4";
	char s_tring[] = "Prue ba";
	char stringvacio[] = "";

	printf("<%s> debería devolver 1: %d\n", 
	string, ft_str_is_alpha(string));
	printf("<%s> debería devolver 1: %d\n", 
	stringvacio, ft_str_is_alpha(stringvacio));
	printf("<%s> debería devolver 0: %d\n", 
	stringnum, ft_str_is_alpha(stringnum));
	printf("<%s> debería devolver 0: %d\n", 
	s_tring, ft_str_is_alpha(s_tring));
	return (0);
}*/
