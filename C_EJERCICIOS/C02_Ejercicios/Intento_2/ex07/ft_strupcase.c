/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:42:25 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/20 15:06:03 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main()
{
	char	ponteenmayuscula[] = "ponteenmayuscula";

	printf("Las letras iniciales en minuscula: %s.\n", 
			ponteenmayuscula);
	printf("Las letras tras usar la funcion ft_strupcase: %s.\n", 
			ft_strupcase(ponteenmayuscula));
	return (0);
}*/
