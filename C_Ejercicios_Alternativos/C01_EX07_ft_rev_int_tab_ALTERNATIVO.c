/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:22:27 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/15 17:10:07 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	h;
	int	tmp;

	h = 1;
	while(h <= (size/2))
	{
		i = tab[(size/2 + h)];
		j = tab[(size/2 - h)];
		tmp = i;
		i = j;
		j = tmp;
		h++;
	}

}

#include <unistd.h>

int main()
{
	int cadena[] = [1, 2, 3, 4, 5];
	int	m;

	m = 0;
	while(cadena[m])
	{
		m++;
	}
	ft_rev_int_tab(cadena, m);
	write(1, cadena, m);
	printf("%d", cadena[1]) ;
	return (0);
}
