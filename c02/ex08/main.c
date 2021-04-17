#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char allcases[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char empty[] = "";


	printf("\n-----\n%s = ", uppercase);
	printf("%s\n", ft_strlowcase(uppercase));
	printf("%s = ", allcases);
	printf("%s\n", ft_strlowcase(allcases));
	printf("Empty = %s\n-----\n", ft_strlowcase(empty));

}