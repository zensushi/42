/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:31:28 by ccubreac          #+#    #+#             */
/*   Updated: 2020/11/26 20:10:00 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int c;
int d;
int u;
void ft_print_comb(void)
{
	c = 0;
	while (c <= 7)
	{
		d = c + 1;
		while (d <= 8)
		{
			u = d + 1;
			while (u <= 9)
			{
				char uu = u + 48;
				char dd = d + 48;
				char cc = c + 48;
				write(1, &cc, 1);
				write(1, &dd, 1);
				write(1, &uu, 1);
				if (c == 7 && d == 8 && u == 9) break;
				write(1, ", ", 2);
				u++;
			};
			d++;
		};
		c++;
	};
}

int main(void)
{
	ft_print_comb();
}
