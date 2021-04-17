/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 03:41:22 by edrodrig          #+#    #+#             */
/*   Updated: 2021/04/17 05:01:31 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_strlen(char *str)
{
	unsigned int c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int c;
	unsigned int offset;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = 0;
	offset = ft_strlen(dest);
	while (src[c] && ((offset + c) < size - 1))
	{
		dest[offset + c] = src[c];
		c++;
	}
	dest[offset + c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[c]));
}
