/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brvalcas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 23:12:31 by brvalcas          #+#    #+#             */
/*   Updated: 2018/02/28 11:52:34 by brvalcas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int res;

	i = -1;
	res = 0;
	while (tab[++i] != '\0')
		if (f(tab[i]) == 1)
			res++;
	return (res);
}
