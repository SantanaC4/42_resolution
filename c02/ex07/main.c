#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char p_lwr[] = "abcdefghijklmnopqrstuvwxyz";
	char p_all[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char p_emp[] = "oi";

	printf("\n-----\n%s = ", p_lwr);
	printf("%s\n", ft_strupcase(p_lwr));
	printf("%s = ", p_all);
	printf("%s\n", ft_strupcase(p_all));
	printf("Empty = %s\n-----\n", ft_strupcase(p_emp));

	return (0);
}