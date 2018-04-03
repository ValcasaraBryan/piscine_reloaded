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

	if (argc <= 2)
	{
		ret = open(argv[1], O_RDONLY);
		if (ret == -1)
		{
			ft_putstr("File name missing.\n");
			return (0);
		}
		ft_display_file(ret);
	}
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
