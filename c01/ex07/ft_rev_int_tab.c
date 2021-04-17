/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 14:32:20 by edrodrig          #+#    #+#             */
/*   Updated: 2021/04/10 18:51:56 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int start;
	int end;
	int aux;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		aux = *(tab + start);
		*(tab + start) = *(tab + end);
		*(tab + end) = aux;
		start++;
		end--;
	}
}
