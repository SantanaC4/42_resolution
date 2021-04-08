#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void n_2(int n[])
{
    if (n[0] == '9')  
    {
        write(1, &n[8], 1);
        write(1, &n[7], 1);
        write(1, &n[6], 1);
        write(1, &n[5], 1);
        write(1, &n[4], 1);
        write(1, &n[3], 1);
        write(1, &n[2], 1);
        write(1, &n[1], 1);
        write(1, &n[0], 1);
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
                                                            if (n[8] != 0) // combn = n = 9
                                                            {
                                                                if (n[8] == '1')
                                                                {

                                                                } else 
                                                                {
                                                                   n[0] = n[8] + 9; 
                                                                   n[1] = n[8] + 8; 
                                                                   n[2] = n[8] + 7; 
                                                                   n[3] = n[8] + 6; 
                                                                   n[4] = n[8] + 5; 
                                                                   n[5] = n[8] + 4;
                                                                   n[6] = n[8] + 3;
                                                                   n[7] = n[8] + 2;
                                                                   n[8] += 1;
                                                                   n_2(n);
                                                                }
                                                            }
                                                        } else
                                                        {
                                                           n[0] = n[7] + 8; 
                                                           n[1] = n[7] + 7; 
                                                           n[2] = n[7] + 6; 
                                                           n[3] = n[7] + 5; 
                                                           n[4] = n[7] + 4;
                                                           n[5] = n[7] + 3;
                                                           n[6] = n[7] + 2;
                                                           n[7] += 1;
                                                           n_2(n);
                                                        }
                                                    }
                                                } else
                                                {
                                                   n[0] = n[6] + 7; 
                                                   n[1] = n[6] + 6; 
                                                   n[2] = n[6] + 5; 
                                                   n[3] = n[6] + 4;
                                                   n[4] = n[6] + 3;
                                                   n[5] = n[6] + 2;
                                                   n[6] += 1;
                                                   n_2(n);

                                                }
                                            }
                                        } else
                                        {
                                           n[0] = n[5] + 6; 
                                           n[1] = n[5] + 5; 
                                           n[2] = n[5] + 4;
                                           n[3] = n[5] + 3;
                                           n[4] = n[5] + 2;
                                           n[5] += 1;
                                           n_2(n);
                                        }
                                    }
                                } else 
                                {
                                   n[0] = n[4] + 5; 
                                   n[1] = n[4] + 4; 
                                   n[2] = n[4] + 3;
                                   n[3] = n[4] + 2;
                                   n[4] += 1;
                                   n_2(n);
                                }
                            }
                        } else 
                        {
                           n[0] = n[3] + 4; 
                           n[1] = n[3] + 3; 
                           n[2] = n[3] + 2;
                           n[3] += 1;
                           n_2(n);
                        }
                     }

                } else 
                {
                    n[0] = n[2] + 3;
                    n[1] = n[2] + 2;
                    n[2] += 1;
                    n_2(n); 
                }
            }
        } else
        {
            n[0] = n[1] + 2;
            n[1]++;
            n_2(n);
        }

    } else 
    {
        write(1, &n[8], 1);
        write(1, &n[7], 1);
        write(1, &n[6], 1);
        write(1, &n[5], 1);
        write(1, &n[4], 1);
        write(1, &n[3], 1);
        write(1, &n[2], 1);
        write(1, &n[1], 1);
        write(1, &n[0], 1);
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

int main(void)
{
    ft_combn(6);
    return 0;
}
