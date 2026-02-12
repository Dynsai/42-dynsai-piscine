/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:08:44 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/20 12:15:11 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main()
{
	char numberitos[] = "87517347";
	char notberitos[] = "";
	char notmberitos[] = "812ahsg";
	char not_m_beritos[] = "734 234";

	printf("Este string '%s' debería dar 1: %d\n", 
	numberitos, ft_str_is_numeric(numberitos));
	printf("Este string '%s' debería dar 1: %d\n", 
	notberitos, ft_str_is_numeric(notberitos));
	printf("Este string '%s' debería dar 0: %d\n", 
	notmberitos, ft_str_is_numeric(notmberitos));
	printf("Este string '%s' debería dar 0: %d\n", 
	not_m_beritos, ft_str_is_numeric(not_m_beritos));
}*/
