/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 23:00:48 by edrodrig          #+#    #+#             */
/*   Updated: 2021/04/15 23:25:24 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	mult;

	mult = 1;
	if (nb > 0 && nb <= 2147395600)
	{
		while (mult * mult <= nb)
		{
			if (mult * mult == nb)
				return (mult);
			else if (mult * mult >= 2147395600)
				return (0);
			mult++;
		}
	}
	return (0);
}
