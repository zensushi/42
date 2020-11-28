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

void	rush00(int x, int y)
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
			if ((i == 0 && j == 0) || (j == 0 && i == x) || (j == y && i == 0) || (j == y && i == x))
				ft_putchar('o');
			else if ((i > 0 && i < x) && (j == 0 || j == y)) 
				ft_putchar('*');
			else if ((j > 0 && j < y) && (i == 0 || i == x)) 
				ft_putchar(*);
			else
				ft_putchar('');
		}
		ft_putchar('\n');		
	}
}
