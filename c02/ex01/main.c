#include <stdio.h>
#include <string.h>
#define size_dest 10
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src[] = "Source Teitei";
	char dest[size_dest];
	unsigned int n;

	n = size_dest;

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", src, dest);

    ft_strncpy(dest, src, n);
	//strncpy(dest, src, n);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", src, dest);
	return (0);
}