#include <stdio.h>
#include <string.h>
#define size 14
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "Source string.";
	char dest[size];
	unsigned int n;
	unsigned int length;


	n = size;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);

    length = ft_strlcpy(dest, src, n);
	//length = strlcpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n%d", src, dest, length);
	return (0);
}