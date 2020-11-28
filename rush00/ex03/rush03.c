/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 13:17:38 by ccubreac          #+#    #+#             */
/*   Updated: 2020/11/28 13:41:38 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

void	rush03(int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (++j <= y)
	{
		i = 0;
		while (++i <= x)
		{
			if ((i == 1 && j == 1) || (j == y && i == 1))
				ft_putchar('A');
			else if ((i > 1 && i < x) && (j == 1 || j == y)) 
				ft_putchar('B');
			else if ((j > 1 && j < y) && (i == 1 || i == x))
				ft_putchar('B');
			else if ((j == 1 && i == x) || (j == y && i == x))
				ft_putchar('C');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');		
	}
}
