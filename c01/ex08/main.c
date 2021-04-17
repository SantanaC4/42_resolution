#include <stdio.h>

void putarr(int arr[], int size)
{
    for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

void ft_sort_int_tab(int *tab, int size);

int main (void)
{
	int tab[] = {4,3,6,1};

	putarr(tab, 4);
	printf("\n");
	ft_sort_int_tab(tab, 4);
	putarr(tab, 4);
	printf("\n");
	return (0);
}