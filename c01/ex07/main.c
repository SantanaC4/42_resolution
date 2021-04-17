#include <stdio.h>

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

void ft_rev_int_tab(int *tab, int size);

int main (void)
{
	int tab[] = {1,2,3};

	putarr(tab, 3);
	printf("\n");
	ft_rev_int_tab(tab, 3);
	putarr(tab, 3);
	printf("\n");
	return (0);
}