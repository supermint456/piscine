/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchandha <pchandha@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:05:45 by pchandha          #+#    #+#             */
/*   Updated: 2023/05/10 22:22:27 by pchandha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int z)
{
	int	str;

	if (x == 7 && y == 8 && z == 9)
	{
		str = x + '0';
		write(1, &str, 1);
		str = y + '0';
		write(1, &str, 1);
		str = z + '0';
		write(1, &str, 1);
	}
	else
	{
		str = x + '0';
		write(1, &str, 1);
		str = y + '0';
		write(1, &str, 1);
		str = z + '0';
		write(1, &str, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 0;
	y = x + 1;
	z = y + 1;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_putchar(x, y, z);
				z = z + 1;
			}
			y = y + 1;
		}
	x = x + 1;
	}
}
