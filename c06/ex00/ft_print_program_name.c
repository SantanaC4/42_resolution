/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 05:37:56 by edrodrig          #+#    #+#             */
/*   Updated: 2021/04/17 05:39:43 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *nb)
{
	while (*nb)
	{
		write(1, &(*nb), 1);
		nb++;
	}
}

int	main(int argc, char *argv[])
{
	ft_putchar(argv[argc - 1]);
	return (0);
}
