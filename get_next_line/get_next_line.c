/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 12:33:25 by ccubreac          #+#    #+#             */
/*   Updated: 2021/01/22 18:41:59 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	static char	*s[256];
	char		*temp;
	int			n;
	char		buf[BUFFER_SIZE + 1];

	if (fd < 0 || !line || BUFFER_SIZE <= 0 || read (fd, buf, 0) < 0)
		return (-1);
	if (read(ft, buf, BUFFER_SIZE) == 0)
		return (0);
	if (read(fd, buf, BUFFER_SIZE) > 0)
		{
			if (c = ft_strchr(temp, '\n') != 0)
			{
				*line = ft_substr(temp, 0, c - temp);
				return (1);
			}
			else
			{
				get_next_line
			}
		}
	n = 0;
	n++;
	return (n);
}
