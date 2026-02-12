/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:19:17 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/20 14:41:35 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int	main()
{
	char printable[] = "esto %&% 123%$'";
	char empty[] = "";
	char notprintable[] = "á";

	printf("El string <%s> es printable: %d.\n", 
			printable, ft_str_is_printable(printable));
	printf("El string <%s> es printable: %d.\n",
                        empty, ft_str_is_printable(empty));
	printf("El string <%s> no es printabe: %d.\n", 
			notprintable, ft_str_is_printable(notprintable));
	return (0);
}*/
