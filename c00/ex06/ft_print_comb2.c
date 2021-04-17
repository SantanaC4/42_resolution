/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:04:56 by edrodrig          #+#    #+#             */
/*   Updated: 2021/04/09 00:26:14 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putcharn(int i)
{
	if (i < 10)
	{
		ft_putchar(i + 48);
		return ;
	}
	else
		ft_putcharn(i / 10);
	ft_putcharn(i % 10);
}

void	ft_putchar2(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + 48);
	}
	else
		ft_putcharn(n);
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 98)
	{
		j = 1 + i;
		while (j <= 99)
		{
			ft_putchar2(i);
			ft_putchar(' ');
			ft_putchar2(j);
			if (i == 98 && j == 99)
				break ;
			ft_putchar(',');
			ft_putchar(' ');
			j++;
		}
		i++;
	}
}
