/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:52:32 by edrodrig          #+#    #+#             */
/*   Updated: 2021/04/17 11:55:16 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int nbr, char *base)
{
	nbr = *(base + nbr);
	write(1, &nbr, 1);
}

void	ft_putnbr(int nbr, unsigned base_len, char *base)
{
	unsigned int	n;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * (-1);
	}
	else
		n = nbr;
	if (n < base_len)
	{
		ft_putchar(n, base);
		return ;
	}
	else
		ft_putnbr(n / base_len, base_len, base);
	ft_putnbr(n % base_len, base_len, base);
}

int		ft_ver_bas(char *base)
{
	unsigned int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	else
		return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (ft_ver_bas(base) > 1)
		ft_putnbr(nbr, ft_ver_bas(base), base);
}
