/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parenas- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:21:32 by parenas-          #+#    #+#             */
/*   Updated: 2025/10/13 17:47:43 by parenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rep(int nb2)
{
	char	ch;

	if (nb2 == 0)
		return ;
	rep(nb2 / 10);
	ch = '0' + nb2 % 10;
	write(1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	char	ch;

	if (nb < 0)
	{
		write(1, "-", 1);
		rep(-(nb / 10));
		ch = '0' - nb % 10;
	}
	else
	{
		rep(nb / 10);
		ch = '0' + nb % 10;
	}
	write(1, &ch, 1);
}
/*
int main()
{
	ft_putnbr(40235);
	return (0);
}
*/
