#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main (void)
{
	int num, den;
	int *a, *b;

	num = 6;
	den = 7;

	a = &num;
	b = &den;
	
	ft_ultimate_div_mod(a, b);

	printf("%d\n", num);
	printf("%d\n", den);

	return (0);
}