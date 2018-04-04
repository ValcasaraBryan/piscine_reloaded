/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:01:29 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/03 18:49:05 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_display_file(int fd)
{
	char	buf[BUFFER + 1];
	int		ret;

	while((ret = read(fd, buf, BUFFER)) != (-1 && 0))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (ret == -1)
		ft_putstr("read() failed.\n");
}
