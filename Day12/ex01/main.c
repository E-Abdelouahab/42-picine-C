/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoshih <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 21:29:28 by hugoshih          #+#    #+#             */
/*   Updated: 2019/07/25 16:10:11 by hsshih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int argc, char **argv)
{
	int		i;
	int		c;

	if (argc - 1 < 1)
	{
		ft_stdin(0);
		return (0);
	}
	c = ft_is_write_file(argv);
	if (c)
		ft_print_out(c, argv);
	else
	{
		i = 0;
		while (++i < argc)
			if (argv[i][0] == '-' && argv[i][1] == '\0')
				ft_stdin(1);
			else
			{
				if (!ft_print_file(argv[i], 1))
					return (1);
			}
	}
	return (0);
}
