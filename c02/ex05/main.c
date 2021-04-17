#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char *p_upr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_spe = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_";
	char *p_emp = " ";


	printf("-----\n1 = String contains only uppercase chars\n0 = String doesn't contain only uppercase chars\n\n");
	printf("%s = %d\n", p_upr, ft_str_is_uppercase(p_upr));
	printf("%s = %d\n", p_spe, ft_str_is_uppercase(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_uppercase(p_emp));

	return (0);
}