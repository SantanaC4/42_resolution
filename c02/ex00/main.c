#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char source[] = "Source string.";
	char destin[] = "Destination string.";

	printf("BEFORE\n\tsrc: %s\n\tdes: %s\n", source, destin);

    ft_strcpy(destin, source);

	printf("AFTER\n\tsrc: %s\n\tdes: %s\n", source, destin);
	printf("ORIGINAL STRCOPY\n\tsrc: %s\n\tdes: %s\n", source, strcpy(destin, source));
	return (0);
}