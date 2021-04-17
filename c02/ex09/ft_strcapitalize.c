/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:41:56 by edrodrig          #+#    #+#             */
/*   Updated: 2021/04/11 17:49:16 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int c;

	c = 0;
	while (*(str + c))
	{
		if (*(str + c) >= 'A' && *(str + c) <= 'Z')
			*(str + c) += 32;
		c++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int c;

	str = ft_strlowcase(str);
	c = 0;
	while (*(str + c))
	{
		if (c == 0 && *(str + c) >= 'a' && *(str + c) <= 'z')
			*(str + c) -= 32;
		else if (str[c] == ' ' && str[c + 1] >= 'a' && str[c + 1] <= 'z')
			*(str + c + 1) -= 32;
		else if (((str[c] < 'A') || (str[c] > 'Z' && str[c] < 'a')
					|| (str[c] > 'z'))
					&& str[c + 1] >= 'a' && str[c + 1] <= 'z')
			*(str + c + 1) -= 32;
		c++;
	}
	return (str);
}
