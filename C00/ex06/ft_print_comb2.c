/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 11:29:39 by ccubreac          #+#    #+#             */
/*   Updated: 2020/11/28 12:18:04 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	char arr[5] = {'0', '0', ' ', '0', '0'};
	char space[2] = {',', ' '};

	while (arr[0] <= '9')
	{
		if (arr[0] != '0') { arr[3] = arr[0] + 1;};
		while (arr[1] <= '8')
		{
			arr[4] = arr[1] + 1;
			while (arr[3] <= '9')
			{
				while (arr[4] <= '9')
				{
					write(1, arr, sizeof(arr));
					write(1, space, sizeof(space));
					arr[4]++;
				};
				arr[4] = '0';
				arr[3]++;
			};
			arr[3] = '0';
			arr[1]++;
		}
		arr[0]++;
	}
}

int main(void)
{
	ft_print_comb2();
}
