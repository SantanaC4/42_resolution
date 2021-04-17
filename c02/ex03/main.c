#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char *p_num = "0123456789"; // "0123456789" = {'0','1'..'9'}
	char *p_spe = "0123456789_"; 

	char *p_emp = " ";

	printf("-----\n1 = String contains only numerical chars\n0 = String doesn't contain only numerical chars\n\n");
	printf("%s = %d\n", p_num, ft_str_is_numeric(p_num));
	printf("%s = %d\n", p_spe, ft_str_is_numeric(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_numeric(p_emp));

	return (0);
}