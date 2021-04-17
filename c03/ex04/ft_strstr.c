/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 21:55:06 by edrodrig          #+#    #+#             */
/*   Updated: 2021/04/15 09:55:28 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int s_count;
	int f_count;

	s_count = 0;
	f_count = 0;
	while (str[s_count + f_count] && to_find[f_count])
	{
		if (str[s_count + f_count] == to_find[f_count])
			f_count++;
		else
		{
			if (f_count > 0)
				f_count = 0;
			s_count++;
		}
	}
	if (to_find[f_count] == '\0')
		return (&(str[s_count]));
	else
		return (0);
}
