#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int c, d;
	int *a, *b;

	c = 42;
	d = 43;

	a = &c;
	b = &d;

	ft_swap(a, b);

	printf("%d\n", c);
	printf("%d\n", d);
	return (0);
}