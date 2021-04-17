/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:50:58 by edrodrig          #+#    #+#             */
/*   Updated: 2021/04/13 20:35:58 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char c;

	c = 0;
	while (s1[c] && s2[c])
	{
		if (s1[c] - s2[c] == 0)
			c++;
		else
			return (s1[c] - s2[c]);
	}
	return (s1[c] - s2[c]);
}
