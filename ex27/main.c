/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:16:31 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/03 18:48:52 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int		ret;
	int		i;

	i = 1;
	if (argc <= 2)
	{
		ret = open(argv[i], O_RDONLY);
		if (ret == -1)
		{
			ft_putstr("File name missing.\n");
			return (0);
		}
		ft_display_file(ret);
		ret = 0;
		i++;
	}
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
