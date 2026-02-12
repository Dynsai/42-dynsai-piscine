/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:16:38 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/14 15:08:45 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 47;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%d", div);
	printf(", ");
	printf("%d", mod);
	return (0);
}
*/
