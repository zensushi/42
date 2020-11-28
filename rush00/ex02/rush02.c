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

void	rush02(int x, int y)
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
			if ((i == 0 && j == 0) || (j == 0 && i == x - 1) || (j == y - 1 && i == 0) || (j == y - 1 && i == x - 1))
			{
				a[i][j] = 'o';
				ft_putchar(a[i][j]);
			}
			else if ((i > 0 && i < x) && (j == 0 || j == y - 1)) 
			{
				a[i][j] = '-';
				ft_putchar(a[i][j]);
			}
			else if ((j > 0 && j < y) && (i == 0 || i == x - 1)) 
			{
				a[i][j] = '|';
				ft_putchar(a[i][j]);
			}
			else
			{
				a[i][j] = ' ';
				ft_putchar(a[i][j]);
			}
		}
		ft_putchar('\n');		
	}
}
