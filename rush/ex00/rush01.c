/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 19:55:32 by edrodrig          #+#    #+#             */
/*   Updated: 2021/04/04 21:07:11 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int row;
	int col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (row == 1 && col == 1)
				ft_putchar('/');
			else if ((row == 1 && col == x) || (row == y && col == 1))
				ft_putchar('\\');
			else if (row == y && col == x)
				ft_putchar('/');
			else if ((row > 1 && row < y) && (col > 1 && col < x))
				ft_putchar(' ');
			else
				ft_putchar('*');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
