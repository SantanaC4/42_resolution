#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main(void)
{
	char *p_lwr = "abcdefghijklmnopqrstuvwxyz_";
	char *p_spe = "abcdefghijklmnopqrstuvwxyz";
	char *p_emp = " ";

	printf("-----\n1 = String contains only lowercase chars\n0 = String doesn't contain only lowercase chars\n\n");
	printf("%s = %d\n", p_lwr, ft_str_is_lowercase(p_lwr));
	printf("%s = %d\n", p_spe, ft_str_is_lowercase(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_lowercase(p_emp));

	return (0);
}