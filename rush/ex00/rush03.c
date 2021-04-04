/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 17:58:42 by edrodrig          #+#    #+#             */
/*   Updated: 2021/04/04 21:50:59 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int row;
	int col;

	if (x > 0 && y > 0)
	{
		row = 1;
		while (row <= y)
		{
			col = 1;
			while (col <= x)
			{
				if ((row == 1 || row == y) && (col == 1))
					ft_putchar('A');
				else if ((row == 1 || row == y) && (col == x))
					ft_putchar('C');
				else if ((row > 1 && row < y) && (col > 1 && col < x))
					ft_putchar(' ');
				else
					ft_putchar('B');
				col++;
			}
			ft_putchar('\n');
			row++;
		}
	}
}
