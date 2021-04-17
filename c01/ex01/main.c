#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main(void)
{
	int a;
	int *b;
	int **n;
	int ***c;
	int ****d;
	int *****e;
	int ******f;
	int *******g;
	int ********h;
	int *********i;

	a = 21;
	b = &a;
	n = &b;
	c = &n;
	d = &c;
	e = &d;
	f = &e;
	g = &f;
	h = &g;
	i = &h;

	printf("%d\n", a);
	ft_ultimate_ft(i);
	printf("%d\n", a);

	return (0);
}