/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edrodrig <edrodrig@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 11:49:35 by aprotoce          #+#    #+#             */
/*   Updated: 2021/04/12 01:31:56 by edrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*int resetvar(int n[], int ia, int id, int imax)
{
	ia = 0; id = 9; imax = 8;
	while (ia < imax)
	{
		n[ia] = n[imax] + id;
		ia++; id--;
	}
	n[imax] += 1;
	return (n);
}*/

void n_2(int n[])
{
	int ia;
	int id;
	int imax;
	
    if (n[0] == '9')  
    {
		imax = 8;
		while (imax >= 0)
		{
			write(1, &n[imax], 1);
			imax--;
		}
        write(1, "\n", 1);

        if (n[1] == '8')
        {
            if (n[2] != 0) // combn = n = 3
            {
                if (n[2] == '7')
                {
                    if (n[3] != 0) // combn = n = 4
                    {
                        if (n[3] == '6') 
                        {
                            if (n[4] != 0) // combn = n = 5
                            {
                                if (n[4] == '5') 
                                {
                                    if (n[5] != 0) // combn = n = 6
                                    {
                                        if (n[5] == '4') 
                                        {
                                            if (n[6] != 0) // combn = n = 7
                                            {
                                                if (n[6] == '3')
                                                {
                                                    if (n[7] != 0) // combn = n = 8
                                                    {
                                                        if (n[7] == '2')
                                                        {
                                                            if (n[8] != 0 && n[8] != '1') // combn = n = 9
                                                            {
																ia = 0; id = 9; imax = 8;
																while (ia < imax)
																{
																	n[ia] = n[imax] + id;
																	ia++; id--;
																}
																n[imax] += 1;
																n_2(n);
                                                            }
                                                        } 
														else
                                                        {
															ia = 0; id = 8; imax = 7;
															while (ia < imax)
															{
																n[ia] = n[imax] + id;
																ia++; id--;
															}	
                                                           n[imax] += 1;
                                                           n_2(n);
                                                        }
                                                    }
                                                } 
												else
                                                {
													ia = 0; id = 7; imax = 6;
													while (ia < imax)
													{
														n[ia] = n[imax] + id;
														ia++; id--;
													}	
													n[imax] += 1;
													n_2(n);
                                                }
                                            }
                                        } 
										else
                                        {
											ia = 0; id = 6; imax = 5;
											while (ia < imax)
											{
												n[ia] = n[imax] + id;
												ia++; id--;
											}	
                                           n[imax] += 1;
                                           n_2(n);
                                        }
                                    }
                                } 
								else 
                                {
									ia = 0; id = 5; imax = 4;
									while (ia < imax)
									{
										n[ia] = n[imax] + id;
										ia++; id--;
									}							   
                                   n[imax] += 1;
                                   n_2(n);
                                }
                            }
                        } 
						else 
                        {
							ia = 0; id = 4; imax = 3;
							while (ia < imax)
							{
								n[ia] = n[imax] + id;
								ia++; id--;
							}								   
                           n[imax] += 1;
                           n_2(n);
                        }
                     }

                } 
				else 
                {
					ia = 0; id = 3; imax = 2;
					while (ia < imax)
					{
						n[ia] = n[imax] + id;
						ia++; id--;
					}				
                    n[imax] += 1;
                    n_2(n); 
                }
            }
        } 
		else
        {
			n[0] = n[1] + 2;
            n[1]++;
            n_2(n);
        }

    } 
	else 
    {
		imax = 8;
		while (imax >= 0)
		{
			write(1, &n[imax], 1);
			imax--;
		}
        write(1, ", ", 2);
        n[0] += 1;
        n_2(n);
    }
}

void ft_combn(int n)
{
    int nn[9], count;

    count = 0;
    while (count <= 9)
    {
        if (count < n)
            nn[count] = '0' + (n - 1) - count;
        else
            nn[count] = 0;
        count++;
    }
    n_2(nn);
}
