/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsshih <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 10:07:31 by hsshih            #+#    #+#             */
/*   Updated: 2019/07/28 00:40:17 by hugoshih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putchar_inarray(int *count, char *str, char c);

void	ft_print_line_04(int x, int *count, char *str)
{
	if (x == 1)
		ft_putchar_inarray(count, str, 'A');
	else if (x > 1)
	{
		ft_putchar_inarray(count, str, 'A');
		while (x-- > 2)
			ft_putchar_inarray(count, str, 'B');
		ft_putchar_inarray(count, str, 'C');
	}
	ft_putchar_inarray(count, str, '\n');
}

void	ft_print_endline_04(int x, int *count, char *str)
{
	if (x == 1)
		ft_putchar_inarray(count, str, 'C');
	else if (x > 1)
	{
		ft_putchar_inarray(count, str, 'C');
		while (x-- > 2)
			ft_putchar_inarray(count, str, 'B');
		ft_putchar_inarray(count, str, 'A');
	}
	ft_putchar_inarray(count, str, '\n');
}

void	ft_print_row_04(int x, int *count, char *str)
{
	if (x == 1)
		ft_putchar_inarray(count, str, 'B');
	else if (x > 1)
	{
		ft_putchar_inarray(count, str, 'B');
		while (x-- > 2)
			ft_putchar_inarray(count, str, ' ');
		ft_putchar_inarray(count, str, 'B');
	}
	ft_putchar_inarray(count, str, '\n');
}

char	*rush_04(int x, int y)
{
	char	*output;
	int		count;

	count = 0;
	output = (char*)malloc(sizeof(*output) * ((x + 1) * y + 1));
	output[(x + 1) * y] = '\0';
	if (y == 1)
		ft_print_line_04(x, &count, output);
	else if (y > 1)
	{
		ft_print_line_04(x, &count, output);
		while (y-- > 2)
		{
			ft_print_row_04(x, &count, output);
		}
		ft_print_endline_04(x, &count, output);
	}
	return (output);
}
