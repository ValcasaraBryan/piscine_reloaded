/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 15:16:31 by brvalcas          #+#    #+#             */
/*   Updated: 2018/04/03 15:16:33 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "../../libft/libft.h"

int		main(int argc, char **argv)
{

	printf("%d\n", ft_display_file(open("42.txt", O_RDONLY)));

	return (0);
}