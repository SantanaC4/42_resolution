/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 20:41:22 by edrodrig          #+#    #+#             */
/*   Updated: 2021/04/11 22:11:33 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char nb)
{
	write(1, &nb, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int hexa[2];
	int index;

	while (*str)
	{
		if (*str < ' ' || *str > 126)
		{
			hexa[0] = *str / 16;
			hexa[1] = *str % 16;
			index = 0;
			ft_putchar('\\');
			while (index < 2)
			{
				if (hexa[index] <= 9 && hexa[index] >= 0)
					ft_putchar(hexa[index] + '0');
				else if (hexa[index] > 9 && hexa[index] < 16)
					ft_putchar(hexa[index] + 87);
				index++;
			}
		}
		else
			ft_putchar(*str);
		str++;
	}
}
